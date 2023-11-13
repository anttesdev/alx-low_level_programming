#!/bin/bash
wget -P /tmp https://github.com/anttesdev/alx-low_level_programming/blob/master/0x18-dynamic_libraries/lotto.so
export LD_PRELOAD=/tmp/lotto.so
