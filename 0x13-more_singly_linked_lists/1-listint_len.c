#include "lists.h"

/**
 * listint_len - function return number of elements in list
 * @h: pointer
 *
 * Return: number of elemnts
 */

size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		t++;
		h = h->next;
	}
	return (t);
}

