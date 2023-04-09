#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - find the loop in a linked list
 *
 * @head: head of linked list
 *
 * Return: Address of node where loop starts, or NULL if no loop found.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *c0, *c1;

	if (head == NULL)
		return (NULL);

	c0 = c1 = head;
	do {
		if (c0->next)
			c0 = c0->next;
		else
			return (NULL);

		if (c1->next->next)
			c1 = c1->next->next;
		else
			return (NULL);
	} while (c1 != c0);

	c0 = head;
	while (c1 != c0)
	{
		c1 = c1->next;
		c0 = c0->next;
	}

	return (c0);
}
