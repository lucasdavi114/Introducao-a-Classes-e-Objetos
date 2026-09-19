cmake_minimum_required(VERSION 3.28)
project(Pi)

# Fontes de arquivos CPP
set(
    FONTES
    src/pi.cpp
)

# Define o padrão C++ como 23
set(CMAKE_CXX_STANDARD 23)

# Obriga o uso do C++23 (evita que o compilador caia para versões anteriores caso não ache)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(pi ${FONTES})

# Diretorio de cabeçalhos .h
target_include_directories(pi PRIVATE include)