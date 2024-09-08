#!/usr/bin/env python3

import os

def add_custom_arguments(parser):
    parser.add_argument(
        "--overlay",
        default="outroe",
        dest="overlay",
        help="Defines which executable is being diffed",
    )

def apply_psx_base(config, name):
    config["baseimg"] = f"disks/" + (f"{name}.bin").upper()
    config["myimg"] = f"build/" + (f"{name}.bin").upper()
    config["mapfile"] = f"build/{name}.map"
    config["source_directories"] = [f"src/{name}", "include", f"asm/{name}"]
    config["objdump_executable"] = "mipsel-linux-gnu-objdump"

def apply(config, args):
    name = args.overlay or "dra"
    apply_psx_base(config, name)
    config["arch"] = "mipsel"
    config["objdump_executable"] = "mipsel-linux-gnu-objdump"