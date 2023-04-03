#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b.
 *
 * @s: pointer
 * @b: Constant byte that fills n
 * @n: Number of bytes to be filled starting from s
 *
 * Return: A pointer to the memory area (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *tst = s;

	while(n > 0)
	{
		*tst = b;
		tst++;
		n--;
	}

	return (s);
}
