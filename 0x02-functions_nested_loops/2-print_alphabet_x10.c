#include "main.h"

/**
 * print_alphabet - Prints the alphabets x10 in lowercase, followed by a newline.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int alph;

	for (alph = 1; alph <= 10; alph++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}
}
