#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: head
 */

void free_listint(listint_t *head)
{
	listint_t *d;

	while (head != NULL)
	{
		d = head;
		head = head->next;
		free(d);
	}
}
