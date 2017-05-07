#!/bin/bash
git clone https://github.com/j-rivero/fcl0.5.git fcl
cd fcl && mkdir -p build && cd build && cmake .. && make && sudo make install
