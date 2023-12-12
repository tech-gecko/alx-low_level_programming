#!/bin/bash
gcc tests.o -shared -o libtests.so 
LD_PRELOAD=/$PWD/libtests.so ./gm 9 8 10 24 75 9
