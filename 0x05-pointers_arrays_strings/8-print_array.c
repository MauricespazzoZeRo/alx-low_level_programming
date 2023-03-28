#include "main.h"

/**
 * print_array - Prints n elements of an array of integers, followed by a
 * newline. Numbers are separated by comma and space.
 *
 * @a: Array of integers.
 * @n: Number of elements to print.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
