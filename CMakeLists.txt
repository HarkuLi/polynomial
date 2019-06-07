cmake_minimum_required(VERSION 3.10.2)

include_directories(
    include
)

file(GLOB SRCS src/*.cc)
add_executable(polynomial ${SRCS})
