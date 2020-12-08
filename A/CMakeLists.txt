cmake_minimum_required(VERSION 3.5)
project(A)

add_custom_command(
    OUTPUT index.h
    COMMAND python3 ${PROJECT_SOURCE_DIR}/preparing.py ${PROJECT_SOURCE_DIR}/index.h
    DEPENDS ${PROJECT_SOURCE_DIR}/preparing.py
)

add_custom_target(
    projA
    DEPENDS ${PROJECT_SOURCE_DIR}/index.h
)