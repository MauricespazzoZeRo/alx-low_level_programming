#include <stdio.h>
/* Input other headers here */

/**
 * main - Entry Point
 *
 * This program will print the alphabets
 * in lowercase and in reverse, with a new line.
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');

	return (0);
}
