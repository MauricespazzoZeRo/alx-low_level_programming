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
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
