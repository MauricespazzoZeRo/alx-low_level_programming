#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * @n:Integer that carries the bytes from src.
 *
 * Return: Pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = 0;
	int i;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Copy up to n characters from the source string */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Add a null terminator to the end of the concatenated string */
	dest[dest_len + i] = '\0';

	return (dest);
}
