cmake_minimum_required(VERSION 3.0.0)
project(HelloLibrary VERSION 0.1.0)

set(SOURCES
    helloLibrary.cpp)

set(HEADERS
    include/helloLibrary.hpp)

add_library(HelloLibrary SHARED ${SOURCES} ${HEADERS})
