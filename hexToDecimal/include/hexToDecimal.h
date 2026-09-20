#pragma once

#include <string>

using namespace std;

class Hexadecimal
{
private:
    string hexadecimal;
public:
    Hexadecimal() = default;
    Hexadecimal(string hexadecimal);

    void setNumber(string hexadecimal);

    string getHexadecimal();

    int decimal();
};