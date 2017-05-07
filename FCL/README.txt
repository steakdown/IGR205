FCL comes from:
  https://github.com/j-rivero/fcl0.5

Steps to fully install FCL:
1. Install Boost:
 - Download http://www.boost.org/users/history/version_1_64_0.html
 - Unzip it
 - Move into this directory (cd path/to/boost_1_64_0)
 - ./bootstrap.sh --prefix=/usr/local
 - ./b2 install (takes some minutes)
2. Install libcdd
 - ./install_libcdd.sh
3. Install FCL
 - ./install_fcl.sh
