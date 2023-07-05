#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t.
 *
 * @head: header to listint_t.
 * @index: count of nodes.
 *
 * Return: Nth node of listint_t, NULL if node doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (i == index && current != NULL)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
