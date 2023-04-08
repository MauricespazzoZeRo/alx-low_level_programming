#include "main.h"

/**
 * is_prime_number - checks if a given number is a prime number
 * @n: the integer to check
 *
 * Return: 1 if the integer is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int divisor;

	/* Handle special cases */
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);

	/* Check if n is divisible by any integer from 2 to sqrt(n) */
	for (divisor = 2; divisor <= sqrt(n); divisor++)
	{
		if (n % divisor == 0)
			return (0);
	}

	/* n is not divisible by any integer from 2 to sqrt(n), so it is prime */
	return (1);
}
