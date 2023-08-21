#include "main.h"

/**
 * _strspn - Get the length of a prefix substring.
 *
 * @s: string to be scanned
 * @accept: string containing the character to match
 *
 * Return: number of bytes in the initial segment of s which
 * consists only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;
	unsigned int sb_str_len = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}

		}

		if (accept[y] == '\0')
		{
			return (sb_str_len);
		}

		++sb_str_len;
	}

	return (sb_str_len);
}
