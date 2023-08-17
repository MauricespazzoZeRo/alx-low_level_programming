#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly-linked list.
 * @h: Pointer to the head node of the list.
 *
 * This function prints all the elements (integer values) of a
 * doubly-linked list in forward order. The function traverses
 * the list using the given head node and prints each element's value.
 *
 * Return: The number of nodes (elements) in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
