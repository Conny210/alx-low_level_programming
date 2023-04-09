#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of linked list
 *
 * @head: pointer to head
 *
 * @index: index to find, starting at 0
 *
 * Return: pointer to node or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c0;
	unsigned int c;

	c0 = head;
	c = 0;
	while (c < index)
	{
		if (c0)
			c0 = c0->next;
		else
			return (NULL);
		c++;
	}

	if (c0)
		return (c0);
	else
		return (NULL);
}
