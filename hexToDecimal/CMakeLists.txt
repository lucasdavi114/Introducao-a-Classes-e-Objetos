cmake_minimum_required(VERSION 3.28)
project(HexToDecimal)

set(
    FONTES
    src/hexToDecimal.cpp
    src/testarHexToDecimal.cpp
)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hexToDecimal ${FONTES})

target_include_directories(hexToDecimal PRIVATE include)