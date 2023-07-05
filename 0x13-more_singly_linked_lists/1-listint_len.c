#include "lists.h"

/**
 * listint_len -  Returns number of elements in listint_t
 *
 * @h: Pointer to listint_t
 *
 * Return: Number of elements in listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
