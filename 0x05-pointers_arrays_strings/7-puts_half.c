#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a newline.
 *
 * @str: String to print.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len, i;

	/* Find length of string */
	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}

	/* Print second half of string */
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len + 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	/* Print newline */
	_putchar('\n');
}
