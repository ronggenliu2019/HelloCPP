cmake_minimum_required(VERSION 3.0.0)
project(HelloCPP VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(helloLibrary)

link_directories(/home/garyliu/cpp_project/HelloCPP/build/helloLibrary)

include_directories(/home/garyliu/cpp_project/HelloCPP/helloLibrary/include)

add_executable(HelloCPP main.cpp)

target_link_libraries(HelloCPP libHelloLibrary.so)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)