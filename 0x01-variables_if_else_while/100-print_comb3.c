#include <stdio.h>
/* Input other headers here */

/**
 * main - Entry Point
 *
 * This program will print all possible different
 * combinations of double-digit numbers using function
 * "putchar" with a new line.
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	int sin1, sin2;

	for (sin1 = 0; sin1 < 9; sin1++)
	{
		for (sin2 = sin1 + 1; sin2 < 10; sin2++)
		{
			putchar(sin1 + '0');
			putchar(sin2 + '0');
			if (sin1 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
