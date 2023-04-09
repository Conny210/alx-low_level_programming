#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts new node
 *
 * @head: pointer to pointer to head
 *
 * @index: inserts node
 *
 * @n: value
 *
 * Return: Address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *w;
	listint_t *c0;
	unsigned int c;

	if (head == NULL)
		return (NULL);

	c0 = *head;
	for (c = 1; c0 && c < index; c++)
	{
		c0 = c0->next;
		if (c0 == NULL)
			return (NULL);
	}

	w = malloc(sizeof(listint_t));
	if (w == NULL)
	{
		free(w);
		return (NULL);
	}
	w->n = n;

	if (index == 0)
	{
		*head = w;
		w->next = c0;
	}
	else if (c0->next)
	{
		w->next = c0->next;
		c0->next = w;
	}
	else
	{
		w->next = NULL;
		c0->next = w;
	}

	return (w);
}
