#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t.
 *
 * @h: Head, Pointer to lsitint_t.
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
