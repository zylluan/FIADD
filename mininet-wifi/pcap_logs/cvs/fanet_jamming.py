#!/usr/bin/env python
'''
启动 3 个无线节点（sta1、sta2、sta3），其中 sta1 ↔ sta2 正常通信。

在 sta3 作为“干扰节点”，通过 tc netem 或 wmediumd 干扰模型注入噪声。

在 sta1 ↔ sta2 之间运行 iperf，同时用 tcpdump 抓包，收集流量。

在干扰期间和非干扰期间收集两组数据，方便做对比
'''

from mininet.log import setLogLevel, info
from mn_wifi.net import Mininet_wifi
from mn_wifi.cli import CLI
from mn_wifi.link import wmediumd, adhoc
from mn_wifi.wmediumdConnector import interference
import random, time


def topology(args):
    "Create a FANET network with 3 UAV nodes."
    net = Mininet_wifi(link=wmediumd, wmediumd_mode=interference)

    info("*** Creating UAV nodes (3 stations)\n")
    kwargs = dict()
    if '-a' in args:
        kwargs['range'] = 90

    sta1 = net.addStation('sta1', ip6='fe80::1', position='50,50,0', **kwargs)
    sta2 = net.addStation('sta2', ip6='fe80::2', position='150,50,0', **kwargs)
    sta3 = net.addStation('sta3', ip6='fe80::3', position='100,150,0', **kwargs)

    net.setPropagationModel(model="logDistance", exp=4)

    info("*** Configuring wifi nodes\n")
    net.configureWifiNodes()

    info("*** Creating FANET adhoc links\n")
    protocols = ['babel', 'batman_adv', 'batmand', 'olsrd', 'olsrd2']
    link_kwargs = dict()
    for proto in args:
        if proto in protocols:
            link_kwargs['proto'] = proto
            info("   proto = %s\n" % proto)

    net.addLink(sta1, cls=adhoc, intf='sta1-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)
    net.addLink(sta2, cls=adhoc, intf='sta2-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)
    net.addLink(sta3, cls=adhoc, intf='sta3-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)

    info("*** Plotting graph\n")
    net.plotGraph(max_x=200, max_y=200)

    info("*** Setting mobility\n")
    net.setMobilityModel(time=0, model='RandomDirection',
                         max_x=200, max_y=200,
                         min_v=1, max_v=2, seed=1)

    info("*** Starting network\n")
    net.build()

    if 'proto' not in link_kwargs:
        info("\n*** Addressing UAV nodes (IPv6)\n")
        sta1.setIP6('2001::1/64', intf="sta1-wlan0")
        sta2.setIP6('2001::2/64', intf="sta2-wlan0")
        sta3.setIP6('2001::3/64', intf="sta3-wlan0")
        
    
    info("*** 启动业务通信 (sta1 <-> sta2)\n")
    sta2.cmd("iperf -s -u -i 1 > 5sta2_iperf.log &")
    sta1.cmd("iperf -c 10.0.0.2 -u -t 700 -i 1 > 5sta1_iperf.log &")

    # 先抓正常流量
    info("*** 抓取正常通信 10s\n")
    sta1.cmd("tcpdump -i sta1-wlan0 -w 5si_normal.pcap &")
    time.sleep(10)
    sta1.cmd("pkill -f tcpdump")

    # 模拟信号干扰
    info("*** 启动信号干扰攻击 (tc netem)\n")
    sta1.cmd("tc qdisc add dev sta1-wlan0 root netem loss 30% delay 100ms corrupt 5%")

    # 抓取干扰下流量
    info("*** 抓取干扰流量 600s\n")
    sta1.cmd("tcpdump -i sta1-wlan0 -w 5si.pcap &")
    time.sleep(5000)
    sta1.cmd("pkill -f tcpdump")

    # 移除干扰
    info("*** 移除干扰\n")
    sta1.cmd("tc qdisc del dev sta1-wlan0 root netem")

    info("*** 数据集收集完成: 5si_normal.pcap, 5si.pcap\n")

    info("*** Running CLI\n")
    CLI(net)

    info("*** Stopping network\n")
    net.stop()


if __name__ == '__main__':
    setLogLevel('info')
    import sys
    topology(sys.argv)

