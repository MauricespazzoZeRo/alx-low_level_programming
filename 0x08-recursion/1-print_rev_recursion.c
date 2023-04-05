#include "main.h"

/**
 * print_rev_recursion - Prints a string in reverse
 *
 * @s: String character to be inputed and reversed
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
	else if (*s == '\0')
	{
		return;
	}
	else
	{
		printf("\n");
	}
}
