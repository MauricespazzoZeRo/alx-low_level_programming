#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 *
 * Return: 0 if the strings are equal, a negative number if s1 is less than s2,
 *		   or a positive number if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
		int i;

		for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		{
				if (s1[i] != s2[i])
				{
						return (s1[i] - s2[i]);
				}
		}

		return (s1[i] - s2[i]);
}
