#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Pointer to the head node of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, count = 0;
	listint_t *current, *temp;
	listint_t *visited[1024];

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	current = *h;

	while (current != NULL)
	{
		/* Check if the node has been visited before */
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				/* Update visited and free remaining nodes */
				for (i = 0; i < count; i++)
				{
					temp = visited[i];
					visited[i] = NULL;
					free(temp);
				}
				*h = NULL;
				return (count);
			}
		}

		/* Store the current node in the visited array */
		visited[count] = current;
		count++;

		/* Move to the next node */
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (count);
}
