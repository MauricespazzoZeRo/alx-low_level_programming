#include "lists.h"

/**
 * print_listint_safe - Prints a linked list with cycle detection.
 *
 * @head: A pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, count = 0;
	const listint_t *current;
	const listint_t *visited[1024];

	current = head;

	while (current != NULL)
	{
		/* Check if the node has been visited before */
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				printf("[%p] %d\n", (void *)current, current->n);
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				return (count);
			}
		}

		/* Store the current node in the visited array */
		visited[count] = current;
		count++;

		/* Print the current node */
		printf("[%p] %d\n", (void *)current, current->n);

		/* Move to the next node */
		current = current->next;
	}

	return (count);
}
