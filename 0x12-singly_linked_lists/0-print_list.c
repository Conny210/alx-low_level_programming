#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints list
 *
 * @r: pointer to the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *r)
{
	size_t n;

	if (!r)
		return (0);
	n = 0;
	do {
		if (!r->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", r->len, r->str);

		r = r->next;
		n++;
	}  while (r);

	return (n);
}
