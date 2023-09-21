#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: pointer
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		k++;
	}
	return (k);
}

