#include <stdio.h>
/* Input other headers here */

/**
 * main - Entry Point
 *
 * This program will printbase 16 numbers
 * in lowercase with a new line.
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		c = i + '0';
		putchar(c);
	}
	for (i = 0; i < 6; i++)
	{
		c = i + 'a';
		putchar(c);
	}
	putchar('\n');

	return (0);
}
