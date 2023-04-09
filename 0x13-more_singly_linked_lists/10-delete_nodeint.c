#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 *
 * @head: pointer to pointer to head
 *
 * @index: index
 *
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c0;
	listint_t *d;
	unsigned int x;

	x = 0;
	c0 = *head;
	if (*head == NULL)
		return (-1);

	while (x < index)
	{
		x++;
		d = c0;
		if (c0->next)
			c0 = c0->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = c0->next;
	else if (c0->next)
		d->next = c0->next;
	else
		d->next = NULL;

	free(c0);
	return (1);
}
