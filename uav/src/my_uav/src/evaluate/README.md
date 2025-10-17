评估指标的计算依赖于：attack.log 和 conversation_history.txt
1. 生成整体结果文件：
python extract_attack_results.py --attack_log 攻击日志路径 --conv_log 模型输出日志 --out extracted_attacks.csv --default_duration 60 --timezone "+08:00"
extracted_attacks.csv包含每一次攻击的攻击时间-攻击类型-检测时间-检测结果-防御时间-防御结果的具体内容

2. 运行评估脚本
python eval.py

