#include "main.h"

/**
 * _strpbrk - Returns a pointer to the first occurence of the
 * character c in the string s, or NULL if the character is
 * not found.
 *
 * @s: Char to scan or search
 * @accept: Char(s) searched for
 *
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *x, *y;

	for (x = s; *x != '\0'; x++)
	{
		for (y = accept; *y != '\0'; y++)
		{
			if (*x == *y)
			{
				return (x);
			}
		}
	}

	return (NULL);
}
