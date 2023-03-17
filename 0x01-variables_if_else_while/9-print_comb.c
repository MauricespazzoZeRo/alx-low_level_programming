#include <stdio.h>
/* Input other headers here */

/**
 * main - Entry Point
 *
 * This program will print all possible
 * combinations of single-digit numbers using function
 * "putchar" with a new line.
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	int sin1;

	for (sin1 = 0; sin1 <= 9; sin1++)
	{
		putchar(sin1 + '0');
		if (sin1 != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
