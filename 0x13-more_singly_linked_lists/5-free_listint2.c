#include "lists.h"

/**
 * free_listint2 - frees a linked listnt_t list.
 *
 * @head: a pointer to a pointer to the first element of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node, *temp_node;

	if (head == NULL)
	{
		return;
	}

	current_node = *head;

	while (current_node != NULL)
	{
		temp_node = current_node->next;
		free(current_node);
		current_node = temp_node;
	}

	*head = NULL;
}
