#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: pointer to pointer
 * @index:....
 *
 * Return: 1 OR 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);

		return (1);
	}
	prev = NULL;

	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}

