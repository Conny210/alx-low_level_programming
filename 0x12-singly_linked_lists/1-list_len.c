#include "lists.h"

/**
 * list_len - Returns number of elements in linked list_t list
 *
 * @r: head of linked list
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *r)
{
	const list_t *x;
	size_t b;

	b = 0;
	x = r;
	while (x != NULL)
	{
		x = x->next;
		b++;
	}

	return (b);
}
