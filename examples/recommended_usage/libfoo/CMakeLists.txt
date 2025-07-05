set(LIB_NAME foo2)

add_library(${LIB_NAME} STATIC
        foo.h
        foo.cpp)

target_include_directories(${LIB_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)

target_link_libraries(${LIB_NAME} quill_static_lib_recommended_usage)