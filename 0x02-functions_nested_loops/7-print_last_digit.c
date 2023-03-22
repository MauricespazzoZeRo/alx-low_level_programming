#include "main.h"
#include <limits.h>

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: Reps. number to be evaluated.
 *
 * Return: Value of last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		_putchar('8');
		_putchar('8');
	}
	if (n < 0)
	{
		n = -n;
	}

	if (n > 0)
	{
		last_digit = n % 10; /* obtain last digit using modulo operator */
	}
	else
	{
		last_digit = 0;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
