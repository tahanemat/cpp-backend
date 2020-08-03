cmake_minimum_required(VERSION 3.17.3)
project(cpp-backend)
set(CMAKE_CXX_STANDARD 17)

find_package(OpenSSL REQUIRED)
find_package(Threads REQUIRED)
find_package(Boost REQUIRED context)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(LIBS ${Boost_LIBRARIES} ${OPENSSL_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})

add_library(http lithium_http_backend.hh)
set_target_properties(http PROPERTIES LINKER_LANGUAGE CXX)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE ${http} ${LIBS})
