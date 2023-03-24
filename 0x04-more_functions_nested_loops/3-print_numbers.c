#include "main.h"

/**
 * print_numbers - Print numbers from 0-9.
 *
 * This function will print numbers from 0-9.
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
