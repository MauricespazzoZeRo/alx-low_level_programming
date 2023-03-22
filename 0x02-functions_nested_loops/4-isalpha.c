#include "main.h"

/**
 * _isalpha - Check for alphabetic chars.
 *
 * @c: variable that reps. chars. in ASCII.
 *
 * Return: 1 if c is alphabetic, 0 for other.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
