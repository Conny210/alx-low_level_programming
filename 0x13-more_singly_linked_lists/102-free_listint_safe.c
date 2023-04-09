#include "lists.h"

/**
 * free_listint_safe - frees list and sets head to null
 *
 * @h: double pointer to head of linked list
 *
 * Return: size of free'd list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *c0, *d;
	size_t c;

	c = 0;
	c0 = *h;
	while (c0 != NULL)
	{
		c++;
		d = c0;
		c0 = c0->next;
		free(d);

		if (d < t)
			break;
	}
	*h = NULL;

	return (c);
}
