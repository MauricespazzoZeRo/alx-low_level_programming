#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number to set the bit in.
 * @index: The index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	mask = 1 << index;
	mask = ~mask;
	*n = (*n & mask);

	return (1);
}
