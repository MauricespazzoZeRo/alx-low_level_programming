#include "main.h"

/**
 * _calloc - Allocate memory for an array of nmemb elements, each of size bytes
 *			 and initialize to zero.
 *
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: A pointer to the allocated memory or NULL if an error occurs.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem_ptr = malloc(nmemb * size);

	if (mem_ptr == NULL)
	{
		return (NULL);
	}

	memset(mem_ptr, 0, nmemb * size);

	return (mem_ptr);
}
