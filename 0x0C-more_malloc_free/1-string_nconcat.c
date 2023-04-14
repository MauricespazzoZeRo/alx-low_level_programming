#include "main.h"

/**
 * string_nconcat - Concatenate two strings up to n bytes.
 *
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 * @n: Maximum number of bytes to concatenate from s2.
 *
 * Return: Pointer to the newly allocated string or NULL if an error occurs.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* Get the length of the strings */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Use the entire s2 if n is greater than or equal to the length of s2 */
	if (n >= len2)
	{
		n = len2;
	}

	/* Allocate memory for the new string */
	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}

	/* Copy s1 to the new string */
	for (i = 0; s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];
	}

	/* Concatenate up to n bytes of s2 to the new string */
	for (j = 0; j < n; j++)
	{
		new_str[i + j] = s2[j];
	}

	/* Null terminate the new string */
	new_str[i + j] = '\0';

	return (new_str);
}
