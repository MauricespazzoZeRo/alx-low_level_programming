#include "main.h"

/**
 * swap_int - Swaps the value  of teo integers.
 *
 * @a: unsigned int used
 * @b: unsigned int used
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
