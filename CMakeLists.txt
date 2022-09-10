cmake_minimum_required(VERSION 3.23)
project(CaesarCipher C CXX)

set(CMAKE_C_STANDARD 11)

add_executable(CaesarCipher src/main.c
    src/CaesarCipher.h src/CaesarCipher.c)

# Move the executable to the root directory
set_target_properties(CaesarCipher PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})
