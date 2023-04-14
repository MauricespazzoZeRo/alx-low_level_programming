#include "main.h"

/**
 * _realloc - Reallocate a memory block using malloc and free.
 *
 * @ptr: Pointer to the memory block previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: Pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* If new_size is zero, free the memory block and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, allocate a new memory block */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			return (new_ptr);
		}
	}

	/* If new_size is equal to old_size, do nothing and return ptr */
	if (new_size == old_size)
	{
		return (ptr);
	}

	/* Allocate a new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	/* Copy the contents of the old memory block to the new memory block */
	if (new_size > old_size)
	{
		memcpy(new_ptr, ptr, old_size);
	}
	else
	{
		memcpy(new_ptr, ptr, new_size);
	}

	/* Free the old memory block */
	free(ptr);

	return (new_ptr);
}
