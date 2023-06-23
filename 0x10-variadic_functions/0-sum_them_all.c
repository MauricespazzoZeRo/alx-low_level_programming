#include "variadic_functions.h"

/**
 * sum_them_all - Sums all parameters
 *
 * @n: Constant positive integer
 *
 * Return: Sum of all parameters, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}

		result += va_arg(args, unsigned int);
	}

	va_end(args);

	return (result);
}
