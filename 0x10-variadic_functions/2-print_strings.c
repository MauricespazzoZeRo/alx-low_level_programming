#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 *
 * @separator: String to be printed between numbers
 * @n: Number of strings passed to the function
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	char *curr_arg;
	va_list args;
	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		curr_arg = va_arg(args, char *);

		if (curr_arg == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", curr_arg);
		}

		if (separator != NULL && count < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
