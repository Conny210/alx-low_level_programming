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
	const listint_t *x;
	size_t nodes;

	for (x = h, nodes = 0; x != NULL; nodes++, x = x->next)
		printf("%d\n", x->n);

	return (nodes);
}
