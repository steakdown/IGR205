#!/bin/bash
git clone https://github.com/danfis/libccd.git libccd
cd libccd && mkdir -p build && cd build && cmake -G "Unix Makefiles" .. && make && sudo make install
