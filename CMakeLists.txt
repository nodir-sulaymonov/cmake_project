cmake_minimum_required(VERSION 3.5)

project(CmakeProject)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CmakePro_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CmakePro_BINARY_DIR}/lib)

add_subdirectory(A)
add_subdirectory(B)
add_subdirectory(C)