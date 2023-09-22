#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function frees a list_t list
 * @head: pointer
 */

void free_list(list_t *head)
{
	list_t *t = head;

	while (t != NULL)
	{
		list_t *p = t;

		t = t->next;
		free(p->str);
		free(p);
	}
}

