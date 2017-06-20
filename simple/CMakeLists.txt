# Top-level CMakeLists.txt

cmake_minimum_required(VERSION 2.8)
project(foo)

add_executable(boo boo.cpp)
add_executable(bar bar.cpp)

enable_testing()
add_test(NAME boo COMMAND boo)

add_test(NAME bar COMMAND bar)
add_test(NAME bar-with-args COMMAND bar arg1 arg2 arg3)
