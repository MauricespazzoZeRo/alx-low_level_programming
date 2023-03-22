#include "main.h"

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

	if (n > 0)
	{
		last_digit = n % 10;
	}
	if (n < 0)
	{
		n = -n;
	}
	else if (n == 0)
	{
		last_digit = 0;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
