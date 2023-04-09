#include "lists.h"

/**
 * free_listint2 - frees list
 *
 * @head: pointer to pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *d;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		d = *head;
		*head = (*head)->next;
		free(d);
	}
}
