project(hello-world)
cmake_minimum_required(VERSION 3.0)

set(BINARY_NAME hello-world)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra")

if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
message(FATAL_ERROR "FATAL: In-source builds are not allowed.
You should create a separate directory for build files.")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

message("=====")
message("CMAKE BINARY DIR: ${CMAKE_BINARY_DIR}")
message("CMAKE HOME DIRECTORY: ${CMAKE_HOME_DIRECTORY}")
message("CMAKE SOURCE DIR: ${CMAKE_SOURCE_DIR}")
message("CMAKE INCLUDE PATH: ${CMAKE_INCLUDE_PATH}")
message("====")

add_executable(${BINARY_NAME} src/main.cpp)