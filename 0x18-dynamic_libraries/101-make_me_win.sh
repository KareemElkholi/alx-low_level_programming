#!/bin/bash
wget -P /tmp https://github.com/KareemElkholi/alx-low_level_programming/raw/main/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD=/tmp/101-make_me_win.so
