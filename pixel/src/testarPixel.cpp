#include <iostream>
#include <cstdlib>
#include "testarPixel.h"


int main()
{
    return TestarPixel().testarPixel();
}

int TestarPixel::testarPixel()
{

    Pixel p, pix(5, 15);
    exibirPixel(p);
    exibirPixel(pix);

    return EXIT_SUCCESS;
}

void TestarPixel::exibirPixel(Pixel p)
{
    cout << p.toString() << endl;
}