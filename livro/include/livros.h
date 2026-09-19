#pragma once

#include <string>

using namespace std;

class Livro
{
private:
        
    unsigned int codigo = 0;
    string titulo = "";
    string autor = "";
    string editora = "";
    float preco = 0.0f;
    
public:
    Livro() = default;
    Livro(
        unsigned int codigo,
        string titulo,
        string autor,
        string editora,
        float preco
    );

    void setCodigo(unsigned int codigo);
    void setTitulo(string titulo);
    void setAutor(string autor);
    void setEditora(string editora);
    void setPreco(float preco);

    unsigned int getCodigo();
    string getTitulo();
    string getAutor();
    string getEditora();
    float getPreco();

    string toString();
};