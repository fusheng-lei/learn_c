cmake_minimum_required(VERSION 3.30)
project(Project C)

set(CMAKE_C_STANDARD 99)

file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/Test/src)
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/Test/inc)


add_executable(Project main.c
        Test/inc/queue.h
        Test/src/queue.c
        Test/src/write_test.c
        Test/inc/write_test.h
        Test/inc/main.h
        Test/inc/device_drv.h
        Test/src/device_drv.c
)
add_executable(Pointers_on_c main.c)