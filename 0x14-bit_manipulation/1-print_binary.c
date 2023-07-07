#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The number to be printed in binary.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int u_num = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (u_num > 0)
	{
		if ((n & u_num) == u_num)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
		{
			_putchar('0');
		}

		u_num >>= 1;
	}

	if (!flag)
	{
		_putchar('0');
	}
}
