#!/bin/bash
wget -p /media https://github.com/mwesigwa2/alx-low_level_programming/raw/master/0x18-dynamic_libraries/winner.so
export LD_PRELOAD=/media/winner.so
