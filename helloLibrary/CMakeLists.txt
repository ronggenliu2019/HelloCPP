cmake_minimum_required(VERSION 3.0.0)
project(HelloLibrary VERSION 0.1.0)

set(SOURCES
    helloLibrary.cpp)

set(HEADERS
    helloLibrary.hpp)

include(CTest)
enable_testing()

add_library(HelloLibrary SHARED ${SOURCES} ${HEADERS})


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)