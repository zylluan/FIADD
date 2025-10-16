#!/bin/bash
# 用 tc 模拟信号干扰攻击
# 用法: ./signal_jamming.sh <interface> <attack_type>

IFACE=$1      # 目标节点的网卡，比如 sta7-wlan0
ATTACK=$2     # 攻击类型: loss / delay / corrupt / combo

if [ -z "$IFACE" ] || [ -z "$ATTACK" ]; then
    echo "用法: $0 <interface> <attack_type>"
    echo "攻击类型: loss / delay / corrupt / combo"
    exit 1
fi

# 先清除旧的规则
tc qdisc del dev $IFACE root 2>/dev/null

case $ATTACK in
  loss)
    echo "[INFO] 在 $IFACE 上模拟 30% 丢包"
    tc qdisc add dev $IFACE root netem loss 30%
    ;;
  delay)
    echo "[INFO] 在 $IFACE 上模拟 200ms 延迟和 50ms 抖动"
    tc qdisc add dev $IFACE root netem delay 200ms 50ms distribution normal
    ;;
  corrupt)
    echo "[INFO] 在 $IFACE 上模拟 10% 数据包损坏"
    tc qdisc add dev $IFACE root netem corrupt 10%
    ;;
  combo)
    echo "[INFO] 在 $IFACE 上组合干扰: 丢包+延迟+抖动+损坏"
    tc qdisc add dev $IFACE root netem loss 20% delay 150ms 30ms corrupt 5%
    ;;
  *)
    echo "未知攻击类型: $ATTACK"
    exit 1
    ;;
esac

echo "[INFO] 攻击已生效，请观察通信效果。"

