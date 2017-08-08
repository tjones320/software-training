cmake_minimum_required(VERSION 3.8)
project(hardware_applications)

set(CMAKE_CXX_STANDARD 14)

include_directories(STSL/include)

if(WIN32)
    link_directories(STSL/lib/WINDOWS)
elseif(UNIX AND NOT APPLET)
    link_directories(STSL/LINUX)
endif()

add_subdirectory(week1)