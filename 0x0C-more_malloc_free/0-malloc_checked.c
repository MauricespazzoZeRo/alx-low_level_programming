#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc and terminate the program if
 *					malloc fails.
 *
 * @b: Number of bytes to allocate.
 *
 * Return: Pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *mem_ptr;

	mem_ptr = malloc(b);
	if (mem_ptr == NULL)
	{
		exit(98);
	}

	return (mem_ptr);
}
