#include "main.h"

/**
 * strtow - Split a string into words
 *
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words) or NULL if str is NULL or empty
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	len = strlen(str);
	count = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			int word_len = 1;
			for (j = i + 1; j < len && str[j] != ' '; j++)
			{
				word_len++;
			}
			words[k] = malloc(sizeof(char) * (word_len + 1));
			if (words[k] == NULL)
			{
				while (k-- > 0)
				{
					free(words[k]);
				}
				free(words);
				return (NULL);
			}
			strncpy(words[k], str + i, word_len);
			words[k][word_len] = '\0';
			k++;
		}
	}

	words[k] = NULL;
	return (words);
}
