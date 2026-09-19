#include "livros.h"

Livro::Livro(unsigned int codigo, string titulo, string autor, string editora, float preco)
{
    this->codigo = codigo;
    this->titulo = titulo;
    this->autor = autor;
    this->editora = editora;
    this->preco = preco;
}

void Livro::setCodigo(unsigned int codigo)
{
    this->codigo = codigo;
}

void Livro::setTitulo(string titulo)
{
    this->titulo = titulo;
}

void Livro::setAutor(string autor)
{
    this->autor = autor;
}

void Livro::setEditora(string editora)
{
    this->editora = editora;
}

void Livro::setPreco(float preco)
{
    this->preco = preco;
}

unsigned int Livro::getCodigo()
{
    return codigo;
}

string Livro::getTitulo()
{
    return titulo;
}

string Livro::getAutor()
{
    return autor;
}

string Livro::getEditora()
{
    return editora;
}

float Livro::getPreco()
{
    return preco;
}

string Livro::toString()
{
    return to_string(codigo) + ", " + titulo + ", " + autor + ", " + editora + ", R$" + to_string(preco);
}

