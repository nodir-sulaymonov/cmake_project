cmake_minimum_required(VERSION 3.5)
project(C)

add_executable(CTest main_test.cpp test.cpp)
add_dependencies(C ProjectA)

include(include.cmake)
get_project(project_test                googletest
                 GIT_REPOSITORY      https://github.com/google/googletest.git
                 GIT_TAG             master
                 ${UPDATE_DISCONNECTED_IF_AVAILABLE}
)

include(CTest)


add_executable(C main.cpp)
target_link_libraries(C lib)
target_link_libraries(CTest lib)
# target_include_directories(C PRIVATE ${BuildSystem_SOURCE_DIR})

add_test(NAME    CTest 
        COMMAND  project_test)
