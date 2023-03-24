#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 *
 * @n: The number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	/* If n is 0 or less, only print a newline character */
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	/* Print a diagonal line of n '\' characters */
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
