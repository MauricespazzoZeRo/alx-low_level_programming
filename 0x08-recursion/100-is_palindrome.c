#include "main.h"

/**
 * palindrome_helper - Helper function for is_palindrome.
 *
 * @s: A pointer to the string to check.
 * @start: The index of the start of the string.
 * @end: The index of the end of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int palindrome_helper(char *s, int start, int end)
{
	/* Base case:reached mid of string & all chrs match, it's a palindrome */
	if (start >= end)
		return (1);

	/* Recursive case: Compare characters at the start and end of the string */
	if (s[start] != s[end])
		return (0);

	/* Move the start and end indices inward and make a recursive call */
	return (palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Determines if a string is a palindrome, i.e., if it\
 reads the
 * same forwards and backwards.
 *
 * @s: A pointer to the string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome_helper(s, 0, len - 1));
}
