#include "lists.h"

/**
 * add_nodeint_end - Add node at the end of listint_t.
 *
 * @head: Pointer to pointer to head of listint_t.
 * @n: Constant data in node.
 *
 * Return: Address of new_node, NULL if not sucessful.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nend_node, *last_node;

	nend_node = malloc(sizeof(listint_t));
	if (nend_node == NULL)
	{
		return (NULL);
	}

	nend_node->n = n;
	nend_node->next = NULL;

	if (*head == NULL)
	{
		*head = nend_node;
		return (nend_node);
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		last_node->next = nend_node;
	}

	return (nend_node);
}
