#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
从 attack.log 与 conversation_history.txt 中抽取并匹配数据，生成每次攻击一行的实验结果文件 extracted_attacks.csv
extracted_attacks.csv。CSV 包含的列（可按需扩展）：
	attack_id：攻击编号（从1开始）
	attacker：攻击者（例如 ['uav3']）
	target：目标（例如 uav2 或 IP）
	attack_start：攻击开始时间（epoch 秒）
	attack_end：攻击结束时间（epoch 秒，按日志中的时长或默认时长计算）
	detection_time：检测时间（如果有，epoch 秒）
	attack_detected：布尔（True/False）
	attack_type：字符串（如 ddos）
	security_score_cs：浮点（安全分数）
	defense_time：检测时间（如果有，epoch 秒）
	defense_commands：JSON 字符串（防御命令数组）
	px4_command：（若存在）px4_command 文本

用法:
    python extract_attack_results.py \
        --attack_log attack.log \
        --conv_log conversation_history.txt \
        --out extracted_attacks.csv \
        --default_duration 60 \
        --timezone UTC

注意:
- 脚本尽量兼容多种时间格式；如果 conversation_history 的 Time 行使用本地时区，请传入 --timezone 参数（例如 "+08:00" 或 "Asia/Shanghai"）
- 需要 pandas 库: pip install pandas
"""

import re
import json
import argparse
from datetime import datetime, timezone, timedelta
import time
import pandas as pd

# -----------------------
# 配置默认值
# -----------------------
DEFAULT_ATTACK_DURATION = 60.0  # 默认攻击时长（秒），若 attack.log 未提供则使用
# -----------------------

def parse_attack_log(path, default_duration=DEFAULT_ATTACK_DURATION):
    """
    解析 attack.log，返回攻击事件列表，每个事件为 dict:
    {
      'attack_id': int,
      'attacker': str or list,
      'target': str,
      'attack_start_epoch': float,
      'duration': float
    }
    脚本会尝试解析行中给出的时长（如 '时长=10s'），否则使用 default_duration。
    支持多种行格式（基本用正则提取）。
    """
    attacks = []
    id_counter = 1
    with open(path, 'r', encoding='utf-8') as f:
        text = f.read()

    # 将文件按"开始，<epoch>:" 分割（示例行中包含 "开始，1760046544.804822: ..."）
    # 也兼容每行一条的格式。
    # 我们使用正则在全文本中查找模式： 开始，<epoch> : <attacker info line preceeding>
    # 为稳妥，先逐行处理并用正则提取
    for line in text.splitlines():
        line = line.strip()
        if not line:
            continue

        # 尝试提取 epoch 时间（float）
        m_time = re.search(r'开始[，,]\s*([0-9]+\.[0-9]+)\s*[:：]?', line)
        if m_time:
            start_epoch = float(m_time.group(1))
            # try to find attacker and target from previous or same line:
            # Look backwards a bit for a header that contains "攻击者" or "-> 目标"
            # If the line itself contains "攻击者", parse it
            # e.g. "*** 攻击者 ['uav3'] -> 目标 uav2 (10.0.0.2) 时长=10s"
            # We'll attempt to extract attacker, target, ip, and duration from the line
            # First attempt full-line parse:
            header = line  # often the same line contains metadata
            # attempt to extract attacker list/bracket
            m_att = re.search(r"攻击者\s*([^\s]+)", header)
            attacker = None
            if m_att:
                attacker = m_att.group(1)
            else:
                # fallback: look for "uavX" patterns
                m_att2 = re.search(r"\[?('?\"?uav[0-9]+'?\"?)\]?", header, re.IGNORECASE)
                if m_att2:
                    attacker = m_att2.group(1)

            # extract target name (after -> 目标)
            m_tgt = re.search(r"目标\s*([^\s\(,、]+)", header)
            target = None
            if m_tgt:
                target = m_tgt.group(1)
            else:
                # fallback: look for "-> uavX"
                m_tgt2 = re.search(r"->\s*(uav[0-9]+)", header, re.IGNORECASE)
                if m_tgt2:
                    target = m_tgt2.group(1)

            # extract ip in parentheses if any
            m_ip = re.search(r"\(([\d\.]+)\)", header)
            ip = m_ip.group(1) if m_ip else None
            if ip and not target:
                target = ip

            # extract duration if present like 时长=10s or 时长=10
            m_dur = re.search(r"时长\s*=\s*([0-9]+(?:\.[0-9]*)?)\s*s", header)
            if not m_dur:
                m_dur = re.search(r"时长\s*=\s*([0-9]+(?:\.[0-9]*)?)", header)
            duration = float(m_dur.group(1)) if m_dur else default_duration

            attacks.append({
                'attack_id': id_counter,
                'attacker': attacker,
                'target': target if target else (ip if ip else ""),
                'attack_start_epoch': start_epoch,
                'duration': duration,
                'attack_end_epoch': start_epoch + duration
            })
            id_counter += 1
        else:
            # If no "开始" pattern in this line, try other common single-line pattern:
            # e.g. lines like: "*** 攻击者 ['uav3'] -> 目标 uav2 (10.0.0.2) 时长=10s"
            m_header = re.search(r"\*\*\*.*攻击者\s+([^\s]+).*->\s*目标\s+([^\s\(]+).*时长\s*=\s*([0-9]+(?:\.[0-9]*)?)s?", line)
            if m_header:
                attacker = m_header.group(1)
                target = m_header.group(2)
                duration = float(m_header.group(3))
                # no start time available here; skip unless a following "开始" line provides it
                # so continue
                continue
            # else skip line
            continue

    return attacks

def parse_conv_time_to_epoch(timestr, tzinfo=None):
    """
    将 conversation History 的 Time 字符串转换为 epoch 秒。
    支持多种常见格式，如:
      2025-9-26 11:47:39
      2025-09-26 11:47:39
    tzinfo: None 或 datetime.timezone 对象 或字符串 "+08:00" 等（若为字符串，则解析为固定偏移）
    """
    s = timestr.strip()
    # try a list of formats
    fmts = [
        "%Y-%m-%d %H:%M:%S",
        "%Y-%m-%d %H:%M",
        "%Y-%m-%d %H:%M:%S.%f",
        "%Y-%m-%d %H:%M:%S %z",
        "%Y-%m-%dT%H:%M:%S",
        "%Y-%m-%dT%H:%M:%S.%f",
        "%Y-%m-%d"
    ]
    dt = None
    for fmt in fmts:
        try:
            dt = datetime.strptime(s, fmt)
            break
        except Exception:
            pass

    if dt is None:
        # try to replace some unusual unicode punctuation and try again
        s2 = s.replace('年', '-').replace('月', '-').replace('日', '').replace('，', ' ').replace('：', ':')
        for fmt in fmts:
            try:
                dt = datetime.strptime(s2, fmt)
                break
            except Exception:
                pass

    if dt is None:
        # 最后尝试按照空格分割："2025-9-26 11:47:39" -> pad month/day
        try:
            parts = s.split()
            if len(parts) >= 2:
                datep = parts[0].split('-')
                datep = [p.zfill(2) for p in datep]  # pad
                dates = "-".join(datep)
                s3 = dates + ' ' + parts[1]
                for fmt in fmts:
                    try:
                        dt = datetime.strptime(s3, fmt)
                        break
                    except Exception:
                        pass
        except Exception:
            dt = None

    if dt is None:
        raise ValueError(f"无法解析时间字符串: {timestr}")

    # apply timezone if provided
    if isinstance(tzinfo, str):
        # try parse "+08:00" or "UTC" etc; support only "+/-HH:MM" here
        if re.match(r'^[\+\-][0-9]{2}:[0-9]{2}$', tzinfo):
            sign = 1 if tzinfo[0] == '+' else -1
            hh = int(tzinfo[1:3])
            mm = int(tzinfo[4:6])
            offset = timedelta(hours=hh, minutes=mm) * sign
            tz = timezone(offset)
            dt = dt.replace(tzinfo=tz)
        else:
            # best-effort: if tzinfo == 'UTC' or 'utc'
            if tzinfo.upper() == 'UTC':
                dt = dt.replace(tzinfo=timezone.utc)
            else:
                # fallback: treat as naive (no tz)
                dt = dt
    elif isinstance(tzinfo, timezone):
        dt = dt.replace(tzinfo=tzinfo)
    else:
        # keep naive (assume UTC)
        dt = dt

    # if tzinfo not set, assume naive is UTC
    if dt.tzinfo is None:
        epoch = (dt - datetime(1970,1,1)).total_seconds()
    else:
        epoch = dt.timestamp()

    return epoch

def parse_conversation_history(path, timezone_hint=None):
    """
    解析 conversation_history.txt，返回检测记录列表（assistant blocks）：
    每条记录为 dict:
    {
      'conv_time_str': original time string,
      'conv_time_epoch': float,
      'assistant_json': dict  (解析后的 JSON，如果存在)
    }
    解析逻辑:
    - 文件被切成多个会话块，块头含 "📅️ Time: 2025-9-26 11:47:39" (或类似)
    - 在该块中寻找 assistant 返回的 JSON（大括号开始的 JSON），并 json.loads
    - 若解析失败，会尽量做 text->json 的修正
    """
    with open(path, 'r', encoding='utf-8') as f:
        text = f.read()

    # 将文件按 "📅️ Time:" 或 "Time:" 等分割
    # 找到所有 "Time:" 出现位置，依次提取块
    blocks = re.split(r"📅️\s*Time:|Time:", text)
    entries = []
    # blocks[0] 是分割前的前导文本，后续每个块首有时间行
    for b in blocks[1:]:
        # b 的开头应是时间（直到换行）
        first_line = b.strip().splitlines()[0].strip()
        time_str = first_line
        # 剩余为块体
        body = "\n".join(b.strip().splitlines()[1:])

        # 从 body 中提取 assistant 返回的 JSON（假设 assistant 区块以 "👉️[assistant]" 或类似，且内容是 {...}）
        # 找第一个大括号对并尝试解析
        assistant_json = None
        # 尝试按 "👉️[assistant]" 标记分块
        m_assist_block = re.search(r"👉️\[assistant\]\s*(\{.*\})", body, flags=re.DOTALL)
        json_text = None
        if m_assist_block:
            json_text = m_assist_block.group(1).strip()
        else:
            # 尝试寻找第一个开大括号并匹配到对应闭括号（简单策略）
            m_first = re.search(r"(\{[\s\S]*\})", body)
            if m_first:
                json_text = m_first.group(1)

        if json_text:
            # 可能 json_text 中含有尾随逗号或多余的尾逗号，需要修正
            try:
                assistant_json = json.loads(json_text)
            except Exception:
                # 修正常见问题：单引号 -> 双引号，尾随逗号，Python-style True/False -> true/false
                jt = json_text
                jt = jt.replace("'", '"')
                jt = re.sub(r",\s*}", "}", jt)
                jt = re.sub(r",\s*\]", "]", jt)
                jt = jt.replace('True', 'true').replace('False', 'false').replace('None', 'null')
                try:
                    assistant_json = json.loads(jt)
                except Exception:
                    # 解析失败：保留原始文本作为字符串字段
                    assistant_json = {"_raw_assistant_text": json_text}

        # 将 time_str 转换为 epoch
        try:
            epoch = parse_conv_time_to_epoch(time_str, timezone_hint)
        except Exception as e:
            # 若无法解析，设置为 None 并继续
            epoch = None

        entries.append({
            'conv_time_str': time_str,
            'conv_time_epoch': epoch,
            'assistant_json': assistant_json,
            'body': body
        })

    return entries

def match_detections_to_attacks(attacks, conv_entries, default_duration=DEFAULT_ATTACK_DURATION):
    """
    将每一条 conv_entries 中的检测结果（若存在）匹配到 attacks 中。
    策略：
      - 若 conv entry 的 conv_time_epoch 在某个 attack 的 [start, end] 区间内，则视为对该攻击的检测/响应
      - 如果发生多次 conv 匹配同一 attack，则保留最早的检测（detection_time 最早）
    返回一个列表，长度 = len(attacks)，每个元素为 dict 包含攻击基本信息及检测/防御字段
    """
    # 复制 attacks 以便添加字段
    results = []
    # 初始化结果字典
    for a in attacks:
        res = dict(a)  # 包含 attack_id, attacker, target, attack_start_epoch, duration, attack_end_epoch
        res.update({
            'detection_time': None,
            'attack_detected': None,
            'attack_type': None,
            'security_score_cs': None,
            'defense_commands': None,
            'px4_command': None,
            'matched_conv_indices': []
        })
        results.append(res)

    # 遍历 conv_entries，若 assistant_json 中含有 attack_detected 等字段，则尝试匹配
    for i, conv in enumerate(conv_entries):
        epoch = conv['conv_time_epoch']
        aj = conv['assistant_json'] or {}
        # check if assistant json contains attack info keys
        if not isinstance(aj, dict):
            continue
        # determine if this conv contains detection info: we expect keys like 'attack_detected' or 'attack_type' or 'security_score_cs'
        if not any(k in aj for k in ['attack_detected', 'attack_type', 'security_score_cs', 'defense_commands']):
            # 也可能使用 lower-case keys; try lower-cased keys
            lower_keys = {k.lower(): k for k in aj.keys()}
            mapped = {}
            if 'attack_detected' in lower_keys:
                mapped['attack_detected'] = aj[lower_keys['attack_detected']]
            # but simpler: skip if no meaningful keys
            if not any(k in aj for k in ['attack_detected', 'attack_type', 'security_score_cs', 'defense_commands']):
                continue

        # For entries that have epoch None, skip
        if epoch is None:
            continue

        # Attempt to match to each attack if epoch falls in [start, end]
        matched_any = False
        for res in results:
            start = res['attack_start_epoch']
            end = res.get('attack_end_epoch', start + default_duration)
            if start is None:
                continue
            # inclusive interval
            if start <= epoch <= end:
                matched_any = True
                # if detection_time not set or this conv is earlier, update
                if (res['detection_time'] is None) or (epoch < res['detection_time']):
                    res['detection_time'] = epoch
                    # copy fields from assistant json if present
                    # try to safely extract fields with default None
                    res['attack_detected'] = aj.get('attack_detected', res['attack_detected'])
                    res['attack_type'] = aj.get('attack_type', res['attack_type'])
                    res['security_score_cs'] = aj.get('security_score_cs', res['security_score_cs'])
                    # defense_commands may be list
                    dc = aj.get('defense_commands', aj.get('defense_command', aj.get('defense_cmds', None)))
                    res['defense_commands'] = dc
                    res['px4_command'] = aj.get('px4_command', res['px4_command'])
                # record which conv index matched
                res['matched_conv_indices'].append(i)
        # If not matched to any attack, we could try fuzzy matching (detection shortly after an attack start)
        if not matched_any:
            # optionally find nearest attack whose start time is within some slack window (e.g., 120s)
            slack = 120.0
            for res in results:
                start = res['attack_start_epoch']
                end = res.get('attack_end_epoch', start + default_duration)
                if start is None:
                    continue
                # if conv time is after start and within slack seconds after end, associate as well
                if start <= epoch <= end + slack:
                    if (res['detection_time'] is None) or (epoch < res['detection_time']):
                        res['detection_time'] = epoch
                        res['attack_detected'] = aj.get('attack_detected', res['attack_detected'])
                        res['attack_type'] = aj.get('attack_type', res['attack_type'])
                        res['security_score_cs'] = aj.get('security_score_cs', res['security_score_cs'])
                        res['defense_commands'] = aj.get('defense_commands', res['defense_commands'])
                        res['px4_command'] = aj.get('px4_command', res['px4_command'])
                    res['matched_conv_indices'].append(i)

    return results

def write_results_csv(results, out_path):
    """
    将结果写入 CSV（pandas DataFrame），对 defense_commands 和 matched_conv_indices 做 JSON 字符串化
    """
    rows = []
    for r in results:
        row = {
            'attack_id': r.get('attack_id'),
            'attacker': json.dumps(r.get('attacker')),  # 防止列表/字符串混用
            'target': r.get('target'),
            'attack_start': r.get('attack_start_epoch'),
            'attack_end': r.get('attack_end_epoch'),
            'detection_time': r.get('detection_time'),
            'attack_detected': r.get('attack_detected'),
            'attack_type': r.get('attack_type'),
            'security_score_cs': r.get('security_score_cs'),
            'defense_commands': json.dumps(r.get('defense_commands'), ensure_ascii=False) if r.get('defense_commands') is not None else None,
            'px4_command': r.get('px4_command'),
            'matched_conv_indices': json.dumps(r.get('matched_conv_indices', []))
        }
        rows.append(row)
    df = pd.DataFrame(rows)
    df.to_csv(out_path, index=False, encoding='utf-8-sig')
    print(f"Wrote {len(rows)} rows to {out_path}")

def main():
    parser = argparse.ArgumentParser(description="Extract attack+detection matching from attack.log and conversation_history.txt")
    parser.add_argument('--attack_log', default='attack.log')
    parser.add_argument('--conv_log', default='conversation_history.txt')
    parser.add_argument('--out', default='extracted_attacks.csv')
    parser.add_argument('--default_duration', type=float, default=DEFAULT_ATTACK_DURATION, help='默认攻击持续时长（秒），attack.log 未指定时使用')
    parser.add_argument('--timezone', default=None, help='可选时区提示，例如 "+08:00" 或 "UTC"。若未指定，默认将 conversation 时间按本地/UTC 解析。')
    args = parser.parse_args()

    attacks = parse_attack_log(args.attack_log, default_duration=args.default_duration)
    print(f"Parsed {len(attacks)} attacks from {args.attack_log}")

    conv_entries = parse_conversation_history(args.conv_log, timezone_hint=args.timezone)
    print(f"Parsed {len(conv_entries)} conversation entries from {args.conv_log}")

    results = match_detections_to_attacks(attacks, conv_entries, default_duration=args.default_duration)
    write_results_csv(results, args.out)
    print("Done.")

if __name__ == '__main__':
    main()

