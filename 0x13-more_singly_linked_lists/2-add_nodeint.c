#include "lists.h"

/**
 * add_nodeint - Adds  a new node at the beginning of listint_t.
 *
 * @head: pointer to pointer to Head of listint_t
 *
 * Return: Address of new element, NULL if not successful.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
