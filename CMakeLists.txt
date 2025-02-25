cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_STANDARD 11)

project(LeMaestroDesFourmis C)



add_subdirectory(docs)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)