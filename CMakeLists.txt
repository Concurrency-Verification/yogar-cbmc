cmake_minimum_required(VERSION 3.4.1)
project(yogar-cbmc)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_VERBOSE_MAKEFILE 1)
set(BUILD_DIR ./src)
message(${BUILD_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_custom_target(run_test
        COMMAND make -C ${BUILD_DIR} -j8
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

aux_source_directory(. source_list)
#add_executable(test1 ${source_list})