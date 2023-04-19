#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: Array of integers to be considered
 * @size: Size of array
 * @cmp: function pointer
 *
 * Return: index of first element for which the cmp element
 * does not return 0, -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}
