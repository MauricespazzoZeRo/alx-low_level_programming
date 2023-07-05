#include "lists.h"

/**
 * pop_listint - Deletes head node of listint_t and returns the data in it.
 *
 * @head: Pointer to pointer to head node.
 *
 * Return: Data (n) in deleted head node, 0 if linked list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;

	temp = *head;

	*head = (*head)->next;
	free(temp);

	return (data);
}
