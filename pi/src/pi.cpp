#include <iostream>
#include <cstdlib>
#include <cmath>
#include <format>
#include "pi.h"

using namespace std;

Pi::Pi(unsigned long int n)
{
    double divisor = 1.0;
    for(unsigned long int i = 0; i < n; i++)
    {   
        pi += divisor/(2 * i + 1);
        divisor = -divisor;
    }
    pi *= 4;
}

long double Pi::getPi()
{
    return pi;
}

void Pi::exibir()
{
    cout << format("{:.20f}", pi) << endl;
}

int main()
{
    
    Pi p(10000000000UL);

    p.exibir();
    return EXIT_SUCCESS;
}