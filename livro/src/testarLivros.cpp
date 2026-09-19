#include <iostream>
#include <cstdlib>
#include <locale>
#include "testarLivros.h"

int main()
{
    return TestarLivros().testarLivros();
}

int TestarLivros::testarLivros()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    cout.imbue(locale("pt_BR.UTF-8"));
    Livro hobbit(1, "O Hobbit", "J. R. R. Tolkien", "HarperCollins", 40.75);
    Livro li;

    exibirlivros(hobbit);
    exibirlivros(li);

    li.setAutor("Arthur Conan Doyle");
    li.setCodigo(2);
    li.setEditora("L&PM Pocket");
    li.setTitulo("Um estudo em Vermelho");
    li.setPreco(10.15);

    exibirlivros(li);
    exibirlivros2(li);

    return EXIT_SUCCESS;
}

void TestarLivros::exibirlivros(Livro l)
{
    cout << l.toString() << endl;
}

void TestarLivros::exibirlivros2(Livro l)
{
    cout<< "Código: "  << l.getCodigo() << endl
        << "Título: " << l.getTitulo() << endl
        << "Autor: " << l.getAutor() << endl
        << "Editora: " << l.getEditora() << endl
        << "Preco: R$" << l.getPreco() << endl;
}