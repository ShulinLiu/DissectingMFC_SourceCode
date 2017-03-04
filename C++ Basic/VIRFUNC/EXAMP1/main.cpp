#include <iostream>
#include "FUNCPTR.H"

using namespace std;

int main()
{
    int Number = 50;
    DisplayNumber(DisplayDecimal,Number);
    DisplayNumber(DisplayOctal,Number);
    DisplayNumber(DisplayHexadecimal,Number);

    return 0;
}
