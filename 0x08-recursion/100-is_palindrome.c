#include "main.h"

/**
 * is_palindrome - Determines if a string is a palindrome, i.e., if it reads the
 * same forwards and backwards.
 *
 * @s: A pointer to the string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	/* Initialize two pointers to the beginning and end of the string */
	char *start = s;
	char *end = s + strlen(s) - 1;

	/* Iterate through the string from both ends, comparing characters */
	while (start < end)
	{
		if (*start != *end)
		{
			return (0);
		}
		start++;
		end--;
	}
	/* If we have reached the middle of the string and all characters match */
	/*it is a palindrome */
	return (1);
}
