add_subdirectory(libfoo)
add_executable(quill_lib_example main.cpp)

target_link_libraries(quill_lib_example quill::quill foo)

