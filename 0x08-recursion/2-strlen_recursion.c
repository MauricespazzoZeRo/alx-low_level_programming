#include "main.h"

/**
 * _strlen_recursion - This function returns the length of a string.
 *
 * @s: String whose length will be gotten through this function.
 *
 * Return: An integer telling us the length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else if (*s == '\0')
	{
		return (0);
	}

	return (0);
}
