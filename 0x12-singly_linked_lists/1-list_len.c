#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns number of elements
 * @h: pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}
