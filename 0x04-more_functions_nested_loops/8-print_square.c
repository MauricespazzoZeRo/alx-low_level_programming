#include "main.h"

/**
 * print_square - Prints a square of '#' characters
 *
 * @size: The size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	/* If size is 0 or less, only print a newline character */
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	/* Print a square of size 'size' using '#' characters */
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
