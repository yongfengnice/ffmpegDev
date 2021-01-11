cmake_minimum_required(VERSION 3.15)
project(ffmpegDev)

set(CMAKE_CXX_STANDARD 14)

file(GLOB c_src_file *.c)
file(GLOB tools_src_file fftools/*.c)

include_directories(/usr/local/include/)
link_directories(/usr/local/lib/)

add_executable(ffmpegDev ${c_src_file} ${tools_src_file} main.cpp ffplay.h)

target_link_libraries(ffmpegDev
        libSDL2main.a libSDL2.a
        libavformat.a libavcodec.a libavfilter.a libavutil.a libswresample.a libswscale.a)