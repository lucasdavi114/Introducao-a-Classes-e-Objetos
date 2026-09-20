#include <iostream>
#include <clocale>
#include <cstdlib>
#include "ascii.h"

int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    char valor = 0;
    std::cout << valor;

    for (int indice = 32; indice < 255; indice++)
    {
        std::cout << indice << ": " << static_cast<char>(indice) << "\n";
    }

    return 0;
}
