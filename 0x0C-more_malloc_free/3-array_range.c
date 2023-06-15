#include "main.h"

/**
 * array_range - Create an array of integers from min to max.
 *
 * @min: Minimum integer value to include in the array.
 * @max: Maximum integer value to include in the array.
 *
 * Return: Pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *int_arr, i;

	/* Check if min is greater than max */
	if (min > max)
	{
		return (NULL);
	}

	/* Allocate memory for the array */
	int_arr = malloc(sizeof(int) * (max - min + 1));
	if (int_arr == NULL)
	{
		return (NULL);
	}

	/* Fill the array with integers from min to max */
	for (i = 0; i <= max - min; i++)
	{
		int_arr[i] = min + i;
	}

	return (int_arr);
}
