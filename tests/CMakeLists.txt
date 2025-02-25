enable_testing()

get_filename_component(SOURCE_DIR ../src ABSOLUTE)

include_directories(SOURCE_DIR)

add_subdirectory(structs)
