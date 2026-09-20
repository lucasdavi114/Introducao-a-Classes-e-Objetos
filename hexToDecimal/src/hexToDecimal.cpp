#include <cctype>
#include <algorithm>
#include "hexToDecimal.h"

Hexadecimal::Hexadecimal(string hexadecimal)
{
    setNumber(hexadecimal);
}

void Hexadecimal::setNumber(string hexadecimal)
{
    transform(hexadecimal.begin(), hexadecimal.end(), hexadecimal.begin(), [](unsigned char c) {
        return std::toupper(c);
    });
    this->hexadecimal = hexadecimal;
}

string Hexadecimal::getHexadecimal()
{
    return hexadecimal;
}

int Hexadecimal::decimal()
{
    int numero = 0;
    int posicao = hexadecimal.length() - 1;
    for(int indice = 0; indice < hexadecimal.length(); indice++)
    {
        int valor = 0;
        if(isalpha(hexadecimal[indice])){
            valor = hexadecimal[indice] - 'A' + 10;
        }
        else{
            valor = hexadecimal[indice] - '0';
        }
        numero += valor * (1 << (4 * posicao));
        posicao--;
    }
    return numero;
}
