#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	/* handle deletion at the beginning of the list */
	if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	/* loop through the list to find the node to be deleted */
	prev = *head;
	for (i = 0; i < index - 1 && prev != NULL; i++)
	{
		prev = prev->next;
	}

	/* if the list is shorter than index, return -1 */
	if (prev == NULL || prev->next == NULL)
	{
		return (-1);
	}

	/* delete the node */
	current = prev->next;
	prev->next = current->next;
	free(current);

	return (1);
}
