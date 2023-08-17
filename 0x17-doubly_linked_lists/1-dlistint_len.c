#include "lists.h"

/**
 * dlistint_len - Function that returns the length of a
 *                doubly-linked list.
 *
 * @h: Pointer to the head node of the list
 *
 * Return: The number of nodes (elements) in the linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
