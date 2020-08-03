# cpp-backend
Simple HTTP server

Built using lithium libraries, which provide a very NodeJS-like interface to create performant web apps.
Can be configured to work with JSON.

# Dependencies
- OpenSSL
- Boost (context)
- Thread
- [Lithium](https://github.com/matt-42/lithium/tree/master/libraries/http_backend)
- CMake (version 3.17.3)
- C++17 compiler (gcc/clang)

# Installing dependencies (ubuntu/debian-based)
```
sudo apt install libboost-context-dev
sudo apt install libssl-dev
sudo apt-get install libpthread-stubs0-dev
sudo apt install cmake
sudo apt install g++-10
```

# Run Application
```
cd cpp-backend
mkdir build && cd build
cmake ..
make -j4
cd src
./source  #Send GET request at specified port

```
