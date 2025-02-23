cmake_minimum_required(VERSION 3.7)
project(ctest)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions ("-Wall -Wextra -Wpedantic -Weffc++ -Wconversion -Wunreachable-code -Wold-style-cast")

set(SOURCES
        main.c
        mathematical_calculator.c
        )

set(HEADERS
        mathematical_calculator.h
        )

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_link_libraries(ctest m)
