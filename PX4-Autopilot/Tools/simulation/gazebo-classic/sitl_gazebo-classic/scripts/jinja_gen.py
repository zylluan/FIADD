#!/usr/bin/env python3


import jinja2
import argparse
import os
import shutil
import fnmatch
import json
import numpy as np


def get_file_contents(filepath):
    with open(filepath, 'rb') as f:
        return f.read()

def str2bool(v):
    if v.lower() in ('yes', 'true', 't', 'y', '1'):
        return True
    elif v.lower() in ('no', 'false', 'f', 'n', '0'):
        return False
    else:
        raise argparse.ArgumentTypeError('Boolean value expected.')

def read_jinja_parameters_from_file(filepath):
    if not filepath:
        return {}
    if not os.path.exists(filepath):
        return {}
    with open(filepath) as f:
        data = json.load(f)
        return data
    return {}

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('filename', help="file that the sdf file should be generated from")
    parser.add_argument('env_dir')
    parser.add_argument('--mavlink_tcp_port', default=4560, help="TCP port for PX4 SITL")
    parser.add_argument('--mavlink_udp_port', default=14560, help="Mavlink UDP port for mavlink access")
    parser.add_argument('--serial_enabled', default=0, help="Enable Serial device for HITL")
    parser.add_argument('--serial_device', default="/dev/ttyACM0", help="Serial device for FMU")
    parser.add_argument('--serial_baudrate', default=921600, help="Baudrate of Serial device for FMU")
    parser.add_argument('--hil_mode', default=0, help="Enable HIL mode for HITL simulation")
    parser.add_argument('--output-file', help="sdf output file")
    parser.add_argument('--stdout', action='store_true', default=False, help="dump to stdout instead of file")
    parser.add_argument('--mavlink_id', default=1, help="Mavlink system ID")
    parser.add_argument('--cam_component_id', default=100, help="Mavlink camera component ID")
    parser.add_argument('--gst_udp_host', default="127.0.0.1", help="Gstreamer UDP host for SITL")
    parser.add_argument('--gst_udp_port', default=5600, help="Gstreamer UDP port for SITL")
    parser.add_argument('--external_render_ip', default='', help="If set, allows to override sniffer's ip in jinja file")
    parser.add_argument('--video_uri', default="udp://127.0.0.1:5600", help="Mavlink camera URI for SITL")
    parser.add_argument('--mavlink_cam_udp_port', default=14530, help="Mavlink camera UDP port for SITL")
    parser.add_argument('--udp_onboard_gimbal_host_ip', default=13030, help="Mavlink Gimbal UDP for SITL")
    parser.add_argument('--udp_onboard_gimbal_port_remote', default=13030, help="Mavlink Gimbal UDP for SITL")
    parser.add_argument('--generate_ros_models', default=False, dest='generate_ros_models', type=str2bool,
                    help="required if generating the agent for usage with ROS nodes, by default false")
    parser.add_argument('--override_parameters_json_path', default='', help="json file with variables to override jinja parameters")
    parser.add_argument('--uav_name', default="uav1", help="uav id")
    args = parser.parse_args()
    env = jinja2.Environment(loader=jinja2.FileSystemLoader(args.env_dir))
    template = env.get_template(os.path.relpath(args.filename, args.env_dir))

    # get ROS version, if generate_ros_models is true.
    ros_version = 0
    if args.generate_ros_models:
        ros_version = os.environ.get('ROS_VERSION')

    # create dictionary with useful modules etc.
    try:
        import rospkg
        rospack = rospkg.RosPack()
    except ImportError:
        pass
        rospack = None

    d = {'np': np, 'rospack': rospack, \
         'mavlink_tcp_port': args.mavlink_tcp_port, \
         'mavlink_udp_port': args.mavlink_udp_port, \
         'serial_enabled': args.serial_enabled, \
         'serial_device': args.serial_device, \
         'serial_baudrate': args.serial_baudrate, \
         'mavlink_id': args.mavlink_id, \
         'cam_component_id': args.cam_component_id, \
         'gst_udp_host': args.gst_udp_host, \
         'gst_udp_port': args.gst_udp_port, \
         'external_render_ip': args.external_render_ip, \
         'video_uri': args.video_uri, \
         'mavlink_cam_udp_port': args.mavlink_cam_udp_port, \
         'udp_onboard_gimbal_host_ip': args.udp_onboard_gimbal_host_ip, \
         'udp_onboard_gimbal_port_remote': args.udp_onboard_gimbal_port_remote, \
         'hil_mode': args.hil_mode, \
         'uav_name':args.uav_name,\
         'ros_version': ros_version}

    override_params_path = args.override_parameters_json_path
    if not override_params_path:
        override_params_path = args.env_dir + "/resources/px4_gazebo_jinja_parameters.json"

    parameters_from_json_file = read_jinja_parameters_from_file(override_params_path)
    d.update(parameters_from_json_file)
    result = template.render(d)

	#如果命令行参数 stdout 被设置为 True，则将 result 打印到标准输出（通常是终端），否则写入文件。
    if args.stdout:
        print(result)

    else:
        if args.output_file:
            filename_out = args.output_file  #将 filename_out 设置为该文件名
        else:
        	#如果没有指定 output_file 参数，根据输入文件名 args.filename 自动生成输出文件名
        	#检查输入文件名是否以 .sdf.jinja 结尾，如果不是，则抛出异常，因为代码只能自动处理 .sdf.jinja 文件。
            if not args.filename.endswith('.sdf.jinja'):
                raise Exception("ERROR: Output file can only be determined automatically for " + \
                                "input files with the .sdf.jinja extension")
			#将 .sdf.jinja 后缀替换为 .sdf
            filename_out = args.filename.replace('.sdf.jinja', '.sdf')
            #通过 assert 确保生成的输出文件名与输入模板文件名不同，防止覆盖
            assert filename_out != args.filename, "Not allowed to overwrite template"
            

        # Overwrite protection mechanism: after generation, the file will be copied to a "last_generated" file.覆盖保护机制：文件生成后，将被复制到last_generated文件中。在下次运行时，我们可以检查目标文件是否仍然未被修改。
        # In the next run, we can check whether the target file is still unmodified.
        #创建一个 .last_generated 文件，这个文件用于保存上一次生成的文件内容，作为后续检查是否有修改的依据。（正常情况下，两个文件的内容是一样的）
        filename_out_last_generated = filename_out + '.last_generated'

		#只有在文件存在的情况下，才需要进行修改保护机制的检查
        if os.path.exists(filename_out) and os.path.exists(filename_out_last_generated):
        	#get_file_contents(filename_out)：获取文件内容，
        	#strip()：去除多余的空格和换行符，用于比较文件内容的实际差异。
            # Check whether the target file is still unmodified.
            if get_file_contents(filename_out).strip() != get_file_contents(filename_out_last_generated).strip():
                raise Exception("ERROR: generation would overwrite changes to `{}`. ".format(filename_out) + \
                                "Changes should only be made to the template file `{}`. ".format(args.filename) + \
                                "Remove `{}` ".format(os.path.basename(filename_out)) + \
                                "(after extracting your changes) to disable this overwrite protection.")

		# 开始写入 文件不存在会自动创建，但不会自动创建目录
        with open(filename_out, 'w') as f_out:
            print(('{:s} -> {:s}'.format(args.filename, filename_out)))
            f_out.write(result)

        # Copy the contents to a "last_generated" file for overwrite protection check next time.将刚生成的文件复制到 .last_generated 文件中，以便下次检查文件是否发生变化。
        shutil.copy(filename_out, filename_out_last_generated)
