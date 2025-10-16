#!/usr/bin/env python3

import sys

from mininet.log import setLogLevel, info
from mn_wifi.link import wmediumd, mesh
from mn_wifi.cli import CLI
from mn_wifi.net import Mininet_wifi
from mn_wifi.wmediumdConnector import interference
from mn_wifi.plot import Plot2D, Plot3D, PlotGraph


def topology(mobility):
    "Create a network."
    net = Mininet_wifi(link=wmediumd, wmediumd_mode=interference)
    
    #plot2D = PlotGraph(min_z=0,max_z=0,min_x=0,max_x=100,min_y=0,max_y=100)

    info("*** Creating nodes\n")
    if mobility:
        #sta1 = net.addStation('sta1')
        #sta2 = net.addStation('sta2')
        #sta3 = net.addStation('sta3')
        sta1 = net.addStation('sta1', position='10,10,0')
        sta2 = net.addStation('sta2', position='50,10,0')
        sta3 = net.addStation('sta3', position='150,10,0')
    else:
        sta1 = net.addStation('sta1', position='10,10,0')
        sta2 = net.addStation('sta2', position='50,10,0')
        sta3 = net.addStation('sta3', position='150,10,0')

    info("*** Configuring Propagation Model\n")
    net.setPropagationModel(model="logDistance", exp=4)

    info("*** Configuring nodes\n")
    net.configureNodes()

    info("*** Creating links\n")
    link = net.addLink(sta1, cls=mesh, ssid='meshNet',
                intf='sta1-wlan0', channel=5, ht_cap='HT40+')  #, passwd='thisisreallysecret')
    info(link,"\n")
    link = net.addLink(sta2, cls=mesh, ssid='meshNet',
                intf='sta2-wlan0', channel=5, ht_cap='HT40+')  #, passwd='thisisreallysecret')
    info(link,"\n")
    link = net.addLink(sta3, cls=mesh, ssid='meshNet',
                intf='sta3-wlan0', channel=5, ht_cap='HT40+')  #, passwd='thisisreallysecret')
    info(link,"\n")
    '''
        def get_mn_wifi_nodes(self):
            return self.stations + self.cars + self.aps + \
                   self.sensors + self.apsensors + self.modems + \
                   self.btdevices
    '''
    nodes = net.get_mn_wifi_nodes()
    info(nodes)
    info("\n")
    links = net.get_links()
    info(links)
    info("\n")

    if mobility:
        info("节点移动\n")
        #net.plotGraph(max_x=100, max_y=100)
        #net.plotGraph(min_z=0,max_z=0,min_x=0,max_x=100,min_y=0,max_y=100)
        PlotGraph(min_z=0,max_z=0,min_x=0,max_x=100,min_y=0,max_y=100,nodes=nodes, links=links)
        net.setMobilityModel(time=0, model='RandomDirection',
                             max_x=100, max_y=100,
                             min_v=0.5, max_v=0.8, seed=20)

    info("*** Starting network\n")
    net.build()

    info('cccccccc\n')
    PlotGraph(min_z=0,max_z=0,min_x=0,max_x=100,min_y=0,max_y=100,nodes=nodes, links=links)
    info('cccccccc\n')

    info("*** Running CLI\n")
    CLI(net)

    info("*** Stopping network\n")
    net.stop()


if __name__ == '__main__':
    setLogLevel('info')
    mobility = True if '-m' in sys.argv else False
    topology(mobility)


'''
import matplotlib.pyplot as plt
plt.plot([1, 2, 3], [4, 5, 6])
plt.show()

'''


