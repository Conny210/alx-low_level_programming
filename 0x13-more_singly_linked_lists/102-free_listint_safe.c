#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);
	current = *h;

	while (current)
	{
		next = current->next;
		free(current);
		count++;

		if (next == *h)
		{
			*h = NULL;
			break;
		}
		current = next;
	}
	return (count);
}

