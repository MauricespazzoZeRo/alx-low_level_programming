#include "main.h"

/**
 * _strcat -  Concatenates two strings.
 *
 * Appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then adds a
 * terminating null byte.
 *
 * @param dest Pointer to the destination string.
 * @param src Pointer to the source string.
 * @return Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	/* Move the pointer to the end of dest string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy the src string to the end of dest string */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add the terminating null byte */
	*dest = '\0';

	return (result);
}
