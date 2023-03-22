#include "main.h"

/**
 * _islower - Check for lowercase chars.
 *
 * @c: variable that reps. chars. in ASCII.
 *
 * Return: 1 if c is lowercase, 0 for other.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
