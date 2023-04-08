#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees memory of list
 *
 * @h: pointer
 *
 * Return: Nothing
 */

void free_list(list_t *h)
{
	if (!h)
		return;

	free_list(h->next);
	if (h->str)
		free(h->str);
	free(h);
}

