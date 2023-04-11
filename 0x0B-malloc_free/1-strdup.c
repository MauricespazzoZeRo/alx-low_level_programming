#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the string to duplicate
 *
 * Return: a pointer to the newly allocated string, or NULL if str is NULL
 * or if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}

	new_str[len] = '\0';

	return (new_str);
}
