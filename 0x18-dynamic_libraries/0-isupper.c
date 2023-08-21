#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 *
 * This function when applied in a main function, checks
 * for uppercase characters.
 *
 * @c: Character to check
 *
 * Return: 1, if c is UPPERCASE; 0, otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
