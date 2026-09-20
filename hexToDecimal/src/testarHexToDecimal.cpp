#include <iostream>
#include "testarHexToDecimal.h"
#include "hexToDecimal.h"

int main()
{
    return TestarHexToDecimal().testarHexToDecimal();
}

int TestarHexToDecimal::testarHexToDecimal()
{
    Hexadecimal hex, hex2("3e8");

    hex.setNumber("a");

    cout << hex.decimal() << endl;
    cout << hex2.decimal() << endl;

    return EXIT_SUCCESS;
}