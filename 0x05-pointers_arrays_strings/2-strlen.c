#include "main.h"

/**
 * swap_int - Swaps the value  of teo integers.
 *
 * @s: unsigned char used
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
