cmake_minimum_required(VERSION 3.5)
set(CMAKE_C_STANDARD 11)

project(LeMaestroDesFourmis C)

add_library(position SHARED structs/position.c structs/position.h)



enable_testing()

get_filename_component(TESTS_DIR ../test ABSOLUTE)

file(GLOB POSITION_TEST_FILES ${TESTS_DIR}/structs/position/test-*.c)
foreach(FILENAME ${POSITION_TEST_FILES})
  get_filename_component(SRC ${FILENAME} NAME)
  get_filename_component(TEST ${FILENAME} NAME_WE)
  add_executable(${TEST} ${TESTS_DIR}/structs/position/${SRC} ${CMAKE_SOURCE_DIR}/structs/position.h)
  add_dependencies(${TEST} position)
  target_link_libraries(${TEST} position)
  add_test("${TEST}" ./${TEST})
endforeach()
