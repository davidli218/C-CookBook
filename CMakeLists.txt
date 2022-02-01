cmake_minimum_required(VERSION 3.21)
project(C-CookBook C)

set(CMAKE_C_STANDARD 23)

set(EXCLUDE_LIST
        ${CMAKE_CURRENT_SOURCE_DIR}/.idea
        ${CMAKE_CURRENT_SOURCE_DIR}/.git
        ${CMAKE_CURRENT_SOURCE_DIR}/.gitignore
        ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt
        ${CMAKE_CURRENT_SOURCE_DIR}/cmake-build-debug
        ${CMAKE_CURRENT_SOURCE_DIR}/README.md
        )

file(GLOB SUB_DIR_LIST ${CMAKE_CURRENT_SOURCE_DIR}/*)

foreach (DIR ${SUB_DIR_LIST})
    if (NOT DIR IN_LIST EXCLUDE_LIST)
        add_subdirectory(${DIR})
    endif ()
endforeach ()
