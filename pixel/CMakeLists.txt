cmake_minimum_required(VERSION 3.28)
project(Pixel)

# Fontes de arquivos CPP
set(
    FONTES
    src/testarPixel.cpp 
    src/pixel.cpp
    )

add_executable(pixel ${FONTES})

# Diretorio de cabeçalhos .h
target_include_directories(pixel PRIVATE include)