cmake_path(GET CMAKE_CURRENT_LIST_DIR FILENAME PROJ)
add_executable(${PROJ} main.cpp)
target_include_directories(${PROJ} PRIVATE ${CMAKE_CURRENT_BINARY_DIR})