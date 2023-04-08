#include "main.h"

#include "main.h"

/**
 * is_prime_number - checks if a given number is a prime number
 * @n: the integer to check
 *
 * Return: 1 if the integer is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1) /* Base case 1 */
		return (0);
	if (n == 2 || n == 3) /* Base case 2 */
		return (1);
	return (is_prime_recursive(n, 2)); /* Call the recursive function */
}

/**
 * is_prime_recursive - checks if a given number is a prime number recursively
 * @n: the integer to check
 * @divisor: the current divisor being checked
 *
 * Return: 1 if the integer is a prime number, 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{
	if (n % divisor == 0) /* Base case 3 */
		return (0);
	if (divisor * divisor > n) /* Base case 4 */
		return (1);
	return (is_prime_recursive(n, divisor + 1)); /* Recursive case */
}
