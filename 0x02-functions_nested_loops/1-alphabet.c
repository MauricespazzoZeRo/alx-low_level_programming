#include "main.h"

/**
 * print_alphabet - Prints the alphabets in lowercase, followed by a newline.
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
