#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * This function concatenates all the arguments of the program, separated
 * by a newline character '\n'. It allocates memory for the new string
 * using malloc, and returns a pointer to the new string.
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		total_len += len + 1;
		len = 0;
	}
	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';

	return (str);
}
