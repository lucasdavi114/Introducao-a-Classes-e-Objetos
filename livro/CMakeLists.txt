cmake_minimum_required(VERSION 3.28)
project(Livro)

# Fontes de arquivos CPP
set(
    FONTES 
    src/livros.cpp
    src/testarLivros.cpp
)

add_executable(livro ${FONTES})

target_include_directories(livro PRIVATE include)