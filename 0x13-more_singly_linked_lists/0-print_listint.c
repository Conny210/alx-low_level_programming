#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the value of int
 *
 * @h: pointer
 *
 * Return: Number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
