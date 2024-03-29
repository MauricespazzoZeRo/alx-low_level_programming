#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
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
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	/* Create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);	/* Check for memory allocation failure */

	new_node->n = n;  /* Assign the provided data to the new node */
	new_node->next = NULL; /* The new node will be the last node */

	if (*head == NULL)
	{
		/*If list is empty, new node becomes the head */
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	/* Traverse to the last node */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	/* Connect new node to existing nodes */
	new_node->prev = current;  /* There's no previous node */
	current->next = new_node;

	return (new_node);	 /* Return the new node */
}
