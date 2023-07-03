#include "lists.h"

/**
 * print_list - Prints all elements in a list_t list
 *
 * @h: pointer to list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0; /* initialized to 0; iterates through list, recording */

	/* while is not empty */
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}

	return (count);
}
