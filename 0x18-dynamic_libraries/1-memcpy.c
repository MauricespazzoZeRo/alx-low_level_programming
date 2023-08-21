#include "main.h"

/**
 * memcpy - Copies n bytes from memory area src to memory area dest
 *
 * @dest: Destination to receive copied chars
 * @src: Source from which char will be copied
 * @n: Number of bytes that will be copied from src
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tst_dest = dest;
	char *tst_src = src;
	unsigned int arrmem = 0;

	while ((n > 0) && (arrmem < n))
	{
		arrmem++;
		tst_dest[arrmem] = tst_src[arrmem];
	}

	return (dest);
}
