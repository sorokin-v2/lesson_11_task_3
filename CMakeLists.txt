cmake_minimum_required(VERSION 3.22.0)
project (LibCmake)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(Leaver SHARED leaver.h leaver.cpp)


add_executable(cmake_lib_client lib_client.cpp)

target_link_libraries(cmake_lib_client Leaver)

