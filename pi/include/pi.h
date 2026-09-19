#pragma once

class Pi
{
private:
    long double pi = 0; // Valor do número PI.
public:

    // Calcula o valor de Pi usando a fórmula matemática de Leibniz, onde n é igual a N na fórmula.
    Pi(unsigned long int n);

    // Obtém o valor do número PI.
    long double getPi();

    // Exibe no console o número PI.
    void exibir();
};