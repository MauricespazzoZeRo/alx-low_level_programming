#include <stdio.h>
/* Input other headers here */

/**
 * main - Entry Point
 *
 * This program will print the alphabets
 * in lowercase with a new line.
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
	putchar('\n');

	return (0);
}
