#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Unsigned long int to search.
 * @index: Index to return.
 *
 * Return: The value of the bit at index or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int bitmask = 1; // Initialize bitmask to 1

    // Check if index is out of range
    if (index > sizeof(unsigned long int) * 8 - 1)
        return (-1);

    bitmask = bitmask << index; // Shift bitmask left by index positions

    // Perform bitwise AND operation to extract bit value
    return ((n & bitmask) != 0);
}
