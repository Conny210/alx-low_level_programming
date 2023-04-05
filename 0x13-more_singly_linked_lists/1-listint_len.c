#include "lists.h"

/**
 * listint_len - returns list length
 *
 * @h: pointer
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
