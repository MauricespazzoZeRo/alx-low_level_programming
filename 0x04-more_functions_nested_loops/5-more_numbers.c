#include "main.h"

/**
 * print_numbers - Print numbers from 0-14 x10.
 *
 * This function will print numbers from 0-9 10 times.
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, j, num;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			num = j;
			if (num > 9)
			{
				putchar(num / 10 + '0');
				num %= 10;
			}
			putchar(num + '0');
		}
		putchar('\n');
	}
}
