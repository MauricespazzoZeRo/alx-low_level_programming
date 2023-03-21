#include "main.h"

/**
 * main -  Entry Point
 *
 * This is a function that prints the alphabets
 * in lowercase, followed by a newline.
 *
 * Return: 0 on successsful run of program
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

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
