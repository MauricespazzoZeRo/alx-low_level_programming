#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly allocated concatenated string,
 * or NULL if allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int s1_len = 0, s2_len = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	concat = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < s2_len; j++)
	{
		concat[i + j] = s2[j];
	}

	concat[i + j] = '\0';

	return (concat);
}
