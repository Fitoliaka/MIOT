cmake_minimum_required(VERSION 3.5)

project(library VERSION 0.0.2)

configure_file(
    config.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

add_library(lib STATIC lib.cpp lib.h)

set_target_properties(
    lib PROPERTIES
    CXX_STANDART 11
    CXXSTANDART_REQUIRED ON
)

target_include_directories(
    lib 
    PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
)