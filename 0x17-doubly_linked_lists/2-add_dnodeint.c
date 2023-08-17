#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to a pointer to the head node of the list.
 * @n: The integer data to be added to the new node.
 *
 * This function creates a new node with the provided integer data and adds
 * it to the beginning of the given dlistint_t doubly-linked list. The head
 * pointer is updated to point to the new node, and the neighboring nodes'
 * pointers are adjusted accordingly.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	/* Create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	/* Connect new node to existing nodes */
	new_node->prev = NULL; /* There's no prev node since it's now the first */
	new_node->next = *head; /* The next ptr become the ptr to the head node */

	/* Update pointer of neighbouring nodes */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
