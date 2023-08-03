#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int.
 *
 * @b: Pointer to binary string.
 *
 * Return: 0 or result.
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0, bit_val;
    int i, len, power;

	len = strlen(b);

    if (b == NULL)
    {
        return (0);
    }

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
        {
            return (0);
        }

		power = len - i - 1;

		/* Convert each char to int value */
		bit_val = b[i] - '0';

		/* Calculate using left shift and accumulate the result */
		result += (bit_val << power);
	}
    return (result);
}
