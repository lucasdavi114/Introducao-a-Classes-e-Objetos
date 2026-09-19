#include "pixel.h"

Pixel::Pixel(unsigned int x, unsigned int y)
{
    this -> x = x;
    this -> y = y;
}

void Pixel::setX(unsigned int x)
{
    this -> x = x;
}

void Pixel::setY(unsigned int y)
{
    this -> y = y;
}

unsigned int Pixel::getX()
{
    return x;
}

unsigned int Pixel::getY()
{
    return y;
}

string Pixel::toString()
{
    return "P(" + to_string(x) + "," + to_string(y) + ")";
}