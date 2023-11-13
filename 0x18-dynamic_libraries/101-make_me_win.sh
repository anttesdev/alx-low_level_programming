#!/bin/bash
wget -P .. https://raw.githubusercontent.com/anttesdev/alx-low_level_programming/master/0x18-dynamic_libraries/lotto.so
export LD_PRELOAD="/$PWD/../lotto.so"
