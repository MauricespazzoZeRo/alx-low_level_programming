#include "main.h"

/**
 * infinite_add - add two numbers infinitely
 *
 * @n1: 1st number
 * @n2: 2nd number
 * @r: Buffer where function will store the result
 * @size_r: Buffer size
 *
 * Return: Pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = size_r - 1;
	r[k] = '\0';

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int digit1, digit2, sum, digit_sum;

		digit1 = i >= 0 ? n1[i] - '0' : 0;
		digit2 = j >= 0 ? n2[j] - '0' : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		digit_sum = sum % 10;
		r[--k] = digit_sum + '0';
		if (k < 0)
		{
			return (0);
		}

		i--;
		j--;
	}
	return (r + k);
}
