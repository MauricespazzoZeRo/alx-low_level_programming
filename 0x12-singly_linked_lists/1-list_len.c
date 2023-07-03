#include "lists.h"

/**
 * list_len -  Returns number of elements in list_t
 *
 * @h: Pointer to list_t
 *
 * Return: Number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
