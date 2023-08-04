#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Unsigned long int, the number to be represented in binary
 */
void print_binary(unsigned long int n)
{
    int i;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
    {
        if ((n >> i) & 1)
            break;
    }

    for (; i >= 0; i--)
    {
        (_putchar((n >> i) & 1 ? '1' : '0'));
    }
}

