#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number to clear the bit in.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int u_num;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	u_num = 1UL << index;
	u_num = ~u_num;
	*n = (*n & u_num);

	return (1);
}
