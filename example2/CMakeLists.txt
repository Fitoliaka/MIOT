cmake_minimum_required(VERSION 3.5)

project(example2)
set(SOURCES
        main.cpp 
        version.cpp
 )
 set(HEADERS
        version.h 
)

add_executable(version ${SOURCES} ${HEADERS})

set_target_properties(
    version PROPERTIES
    CXX_STANDART 11
    CXXSTANDART_REQUIRED ON
)