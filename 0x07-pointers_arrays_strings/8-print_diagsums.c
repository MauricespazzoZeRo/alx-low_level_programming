#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: Pointer to the square matrix
 * @size: Size of the square matrix
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
			{
				sum1 += *((a + x * size) + y);
			}

			if ((x + y) == (size - 1))
			{
				sum2 += *((a + x * size) + y);
			}
		}
	}

	printf("%d, %d\n", sum1, sum2);
}
