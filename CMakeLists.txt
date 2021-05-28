#
# Copyright 2014-2020 Real Logic Limited.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
cmake_minimum_required(VERSION 3.6.1 FATAL_ERROR)
cmake_policy(VERSION 3.6.1)

# use clang for emulate compiling on macos
#set(CMAKE_C_COMPILER "/usr/bin/clang-11")
#set(CMAKE_CXX_COMPILER "/usr/bin/clang++-11")

project(CS430)

if (${CMAKE_CURRENT_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_BINARY_DIR})
    message(FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory)"
            "and run CMake from there. You may need to remove CMakeCache.txt.")
endif ()

option(C_WARNINGS_AS_ERRORS "Enable warnings as errors for C" OFF)
option(CXX_WARNINGS_AS_ERRORS "Enable warnings as errors for C++" OFF)
option(SANITISE_BUILD "Enable sanitise options" OFF)
option(COVERAGE_BUILD "Enable code coverage" OFF)

SET(CMAKE_BUILD_TYPE "Debug")
# default built type is Release
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build" FORCE)
endif (NOT CMAKE_BUILD_TYPE)

if (NOT DEFINED CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 11)
endif ()

if (NOT DEFINED CMAKE_CXX_EXTENSIONS)
    set(CMAKE_CXX_EXTENSIONS OFF)
endif ()

if (NOT DEFINED CMAKE_C_STANDARD)
    set(CMAKE_C_STANDARD 11)
endif ()

if (NOT DEFINED CMAKE_C_EXTENSIONS)
    set(CMAKE_C_EXTENSIONS OFF)
endif ()

# all UNIX-based platform compiler flags
if (UNIX)
    add_compile_options(-Wall -Wpedantic -Wextra -Wno-unused-parameter)

    if (C_WARNINGS_AS_ERRORS)
        add_compile_options($<$<COMPILE_LANGUAGE:C>:-Werror>)
    endif (C_WARNINGS_AS_ERRORS)

    if (CXX_WARNINGS_AS_ERRORS)
        add_compile_options($<$<COMPILE_LANGUAGE:CXX>:-Werror>)
    endif (CXX_WARNINGS_AS_ERRORS)

    if (COVERAGE_BUILD)
        add_compile_options(-O0 -fno-inline --coverage -g)
        SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")
    endif (COVERAGE_BUILD)

endif ()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(GLOB DIRS ${PROJECT_SOURCE_DIR}/*)
foreach (DIR ${DIRS})
    if (IS_DIRECTORY ${DIR})
        if (EXISTS "${DIR}/CMakeLists.txt")
            add_subdirectory(${DIR})
        endif ()
    endif ()
endforeach ()