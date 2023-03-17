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
	int sin1, sin2;

	for (sin1 = 0; sin1 < 10; sin1++)
	{
		for (sin2 = sin1; sin2 < 10; sin2++)
		{
		putchar(sin1 + '0');
		putchar(sin2 + '0');
			if (sin1 != 9 || sin2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
