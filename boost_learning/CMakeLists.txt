cmake_minimum_required(VERSION 3.13)
project(boost_learning)

set(CMAKE_CXX_STANDARD 14)

include_directories(D:\\boost_1_69_0)

link_directories(D:\\boost_1_69_0\\libs)
link_libraries(wsock32)
link_libraries(ws2_32)
set(BOOST_ROOT D:\\boost_1_69_0\\)
SET(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
#find_package(Boost REQUIRED COMPONENTS filesystem regex)

add_executable(boost_learning base main.cpp)