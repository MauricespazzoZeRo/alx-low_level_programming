#include <stdio.h>
/* Input other headers here */

/**
 * main - Entry Point
 *
 * This program will print all possible different
 * combinations of three-digit numbers using function
 * "putchar" with a new line.
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	int sin1, sin2, sin3;

	for (sin1 = 0; sin1 < 8; sin1++)
	{
		for (sin2 = sin1 + 1; sin2 < 9; sin2++)
		{
			for (sin3 = sin2 + 1; sin3 < 10; sin3++)
			{
				putchar(sin1 + '0');
				putchar(sin2 + '0');
				putchar(sin3 + '0');
				if (sin1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');

	return (0);
}
