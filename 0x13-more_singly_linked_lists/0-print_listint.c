#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function prints all elemnets in a list
 * @h: pointer
 *
 * Return: count of elements (t)
 */

size_t print_listint(const listint_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		t++;
	}
	return (t);
}

