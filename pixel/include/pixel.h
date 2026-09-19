#pragma once
#include <string>

using namespace std;

class Pixel
{
    private:
        unsigned int x = 0, y = 0;
    public:
        Pixel() = default;
        Pixel(unsigned int x, unsigned int y);

        void setX(unsigned int x);
        void setY(unsigned int y);

        unsigned int getX();
        unsigned int getY();

        string toString();
};