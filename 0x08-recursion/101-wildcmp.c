#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if the strings can be considered
 * identical, otherwise it returns 0. The second string can contain the special
 * character '*', which can replace any string (including an empty string).
 *
 *	@s1: A pointer to the first string to compare.
 *	@s2: A pointer to the second string to compare.
 *
 *	Return: 1 if the strings can be considered identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	/* If s2 starts with '*', we can ignore it and try to match the rest */
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	/* If 1st character of both strings match, we try to match the rest */
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	/* If none of the above cases apply, the strings are not identical */
	else
	{
		return (0);
	}
}
