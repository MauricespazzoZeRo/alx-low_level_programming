#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: The number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	/* If n is 0 or less, only print a newline character */
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	/* Print n underscores followed by a newline character */
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
