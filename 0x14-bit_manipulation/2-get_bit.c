#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to get the bit from.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask, bit_value;

	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	mask = 1 << index;
	bit_value = (n & mask) >> index;

	return (bit_value);
}
