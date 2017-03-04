/*
    using pointer to function to implement General Function
    using the character: dynamic binding of the c++
*/

#ifndef FUNCPTR_H_INCLUDED
#define FUNCPTR_H_INCLUDED


#include "stdio.h"
//define ptr to function with return value(void), param(const int)
typedef void(*DISPLAYINTEGER)(const int);

//the General function
void DisplayNumber(DISPLAYINTEGER DisplayFormat, const int Number)
{
    DisplayFormat(Number);
}

//display function
void DisplayDecimal(const int Number)
{
    printf("The decimal value is %d\n",Number);
}

void DisplayOctal(const int Number)
{
    printf("The octal value is %o\n",Number);
}

void DisplayHexadecimal(const int Number)
{
    printf("The hexadecimal value is %x\n",Number);
}


#endif // FUNCPTR_H_INCLUDED
