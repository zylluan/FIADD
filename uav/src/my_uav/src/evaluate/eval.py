#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
依据 extracted_attacks.csv 计算四个评估指标：
Detection Accuracy、Average Detection Latency、Defense Success Ratio、Average Response Time

输入文件格式（CSV，每行代表一次攻击）示例：
attack_id,attacker,target,attack_start,attack_end,detection_time,attack_detected,attack_type,security_score_cs,defense_time，defense_commands,px4_command

输出：打印各项指标
"""

import pandas as pd
import numpy as np

# ------------------------
# 参数配置
# ------------------------
CSV_PATH = "extracted_attacks.csv"   # 输入文件路径
DEFAULT_RESPONSE_DELAY = 2.0       
# ------------------------

def compute_metrics(df):
    """
    计算四项指标：
      1) Detection Accuracy
      2) Average Detection Latency
      3) Defense Success Ratio (DSR)
      4) Average Response Time
    """

    # ---------- 1. Detection Accuracy ----------
    # 公式: Accuracy = (TP + TN) / (TP + TN + FP + FN)
    # 假设所有行为均为攻击（label_true = 1），则 Accuracy 计算简化为检测正确率：
    # 即检测出的比例 = TP / (TP + FN)
    # 若文件中含非攻击行为，可加入 label_true 列
    TP = np.sum((df['attack_detected'] == True) | (df['attack_detected'] == 'True'))
    FN = np.sum((df['attack_detected'] == False) | (df['attack_detected'] == 'False') | df['attack_detected'].isna())
    # 因为该数据集中主要是攻击事件，所以不考虑 TN、FP
    Accuracy = TP / (TP + FN) if (TP + FN) > 0 else np.nan

    # ---------- 2. Average Detection Latency ----------
    # 公式: Latency_det = (1/N) * Σ_i (t_out_i^det - t_in_i)
    df_valid_det = df.dropna(subset=['detection_time', 'attack_start'])
    if len(df_valid_det) > 0:
        df_valid_det['Latency_det'] = df_valid_det['detection_time'] - df_valid_det['attack_start']
        Average_Detection_Latency = df_valid_det['Latency_det'].mean()
    else:
        Average_Detection_Latency = np.nan

    # ---------- 3. Defense Success Ratio ----------
    # 公式: DSR = N_success / N_attack
    # 此处定义：若存在非空的防御命令（defense_commands），则视为成功防御
    df['Defense_Success'] = df['defense_commands'].apply(lambda x: 1 if isinstance(x, str) and len(x.strip()) > 2 else 0)
    N_success = np.sum(df['Defense_Success'])
    N_attack = len(df)
    Defense_Success_Ratio = N_success / N_attack if N_attack > 0 else np.nan

    # ---------- 4. Average Response Time ----------
    # 公式: Response_Time_resp = (1/N) * Σ_i (t_out_i^def - t_in_i)
    # 因 defense_time 
    df_valid_resp = df.dropna(subset=['defense_time', 'attack_start'])
    if len(df_valid_resp) > 0:
        df_valid_resp['Response_Time'] = df_valid_resp['defense_time'] - df_valid_resp['attack_start']
        Average_Response_Time = df_valid_resp['Response_Time'].mean()
    else:
        Average_Response_Time = np.nan

    metrics = {
        "Detection_Accuracy": Accuracy,
        "Average_Detection_Latency (s)": Average_Detection_Latency,
        "Defense_Success_Ratio": Defense_Success_Ratio,
        "Average_Response_Time (s)": Average_Response_Time
    }

    return metrics

def main():
    # 读取数据
    df = pd.read_csv(CSV_PATH)
    print(f"Loaded {len(df)} rows from {CSV_PATH}\n")

    metrics = compute_metrics(df)

    print("=== FIADD Evaluation Metrics ===")
    for k, v in metrics.items():
        if isinstance(v, (float, np.floating)):
            print(f"{k:<35}: {v:.4f}")
        else:
            print(f"{k:<35}: {v}")

if __name__ == "__main__":
    main()

