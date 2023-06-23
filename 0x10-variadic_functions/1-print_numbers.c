#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 *
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	int curr_arg;
	va_list args;
	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		curr_arg = va_arg(args, int);
		printf("%d", curr_arg);

		if (separator != NULL && count < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
