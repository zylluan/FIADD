#!/usr/bin/env python3

"""
This example shows on how to enable the adhoc mode
Alternatively, you can use the manet routing protocol of your choice
"""

import sys

from mininet.log import setLogLevel, info
from mn_wifi.link import wmediumd, adhoc
from mn_wifi.cli import CLI
from mn_wifi.net import Mininet_wifi
from mn_wifi.wmediumdConnector import interference

#wmediumd：为节点创建无线链路时用到的模式。
#CLI：命令行接口，用于交互式管理网络
#Mininet_wifi：主类，用于创建 Wi-Fi 网络。
#interference：支持无线干扰的链路模型。



def topology(args):
    "Create a network."
    #Mininet_wifi 实例化一个网络对象:
        #link=wmediumd：表示链路使用 wmediumd 模型
        #wmediumd_mode=interference：启用无线干扰模式
    net = Mininet_wifi(link=wmediumd, wmediumd_mode=interference)

    info("*** Creating nodes\n")
    #kwargs：可选参数，若命令行参数中包含 -a，则设置通信范围为 100 米。
    kwargs = {}
    if '-a' in args:
        kwargs['range'] = 40

    #net.addStation：添加站点：
        #ip6：为每个站点分配一个链路本地 IPv6 地址
        #position：设置站点的 3D 坐标位置

    sta1 = net.addStation('sta1', ip6='fe80::1',
                          position='10,10,0', **kwargs)
    sta2 = net.addStation('sta2', ip6='fe80::2',
                          position='50,10,0', **kwargs)
    sta3 = net.addStation('sta3', ip6='fe80::3',
                          position='90,10,0', **kwargs)

    #设置无线信号传播模型：
        #model="logDistance"：采用对数距离路径损耗模型
        #exp=4：路径损耗指数为 4（通常用于城市环境）
    net.setPropagationModel(model="logDistance", exp=4)

    #configureNodes：自动配置所有节点，例如 IP 地址、接口。
    info("*** Configuring nodes\n")
    net.configureNodes()


    info("*** Creating links\n")
    # MANET routing protocols supported by proto:
    # babel, batman_adv, batmand and olsr
    # WARNING: we may need to stop Network Manager if you want
    # to work with babel 如果想使用babel，可能需要停止网络管理器
    protocols = ['babel', 'batman_adv', 'batmand', 'olsrd', 'olsrd2']
    #遍历命令行参数 args，若指定了支持的协议，则将其存储在 kwargs['proto'] 中
    kwargs = {}
    for proto in args:
        if proto in protocols:
            kwargs['proto'] = proto

    #为每个站点创建自组网链路
    #使用 adhoc 类为每个站点创建链路：
        #ssid：设置网络名称为 adhocNet。
        #mode：无线工作模式为 802.11g。
        #channel=5：指定无线信道。
        #ht_cap='HT40+'：启用 HT40（高吞吐量）模式。
    net.addLink(sta1, cls=adhoc, intf='sta1-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)
    net.addLink(sta2, cls=adhoc, intf='sta2-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                **kwargs)
    net.addLink(sta3, cls=adhoc, intf='sta3-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)

    info("*** Starting network\n")
    net.build()   #构建并启动网络

    #如果未指定路由协议，则为每个站点手动分配一个 IPv6 地址。
    info("\n*** Addressing...\n")
    if 'proto' not in kwargs:
        sta1.setIP6('2001::1/64', intf="sta1-wlan0")
        sta2.setIP6('2001::2/64', intf="sta2-wlan0")
        sta3.setIP6('2001::3/64', intf="sta3-wlan0")

    #启动交互式 CLI
    #CLI(net)：提供交互式命令行接口，允许用户实时管理网络
    info("*** Running CLI\n")
    CLI(net)

    
    info("*** Stopping network\n")
    net.stop()


if __name__ == '__main__':
    setLogLevel('info')
    topology(sys.argv)  #调用 topology 函数，并传入命令行参数。

