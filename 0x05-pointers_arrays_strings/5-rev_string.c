#include "main.h"

/**
 * rev_string - Print a string in reverse, with a newline.
 *
 * @s: Unsigned char representing string.
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	/* Find length of string */
	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}

	/* Reverse string by swapping characters */
	i = 0;
	j--;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
