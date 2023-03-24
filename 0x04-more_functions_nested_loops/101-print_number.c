#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to print
 */

void print_number(int n)
{
	int i = 1;

	if (n < 0) {
		_putchar('-');
		n *= -1;
	}

	while (n / i >= 10)
		i *= 10;

	while (i > 0) {
		_putchar((n / i) % 10 + '0');
		i /= 10;
	}
}
