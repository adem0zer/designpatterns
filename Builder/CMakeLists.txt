cmake_minimum_required(VERSION 3.0.0)
project(project_name)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


file(GLOB_RECURSE compile_SOURCES "src/*.cpp" main.cpp)
file(GLOB_RECURSE compile_HEADERS "header/*.h")

set (compile_INCLUDE_DIRS "")
foreach (_headerFile ${compile_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND compile_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES compile_INCLUDE_DIRS)


add_executable (compile ${compile_SOURCES})
target_include_directories(compile PRIVATE ${compile_INCLUDE_DIRS})
include(CPack)