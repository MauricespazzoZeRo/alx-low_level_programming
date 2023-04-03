#include "main.h"

/**
 * _strstr - Locates a substring
 *
 * @haystack: Char to scan through or search
 * @needle: Char searched for
 *
 * Return: haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
