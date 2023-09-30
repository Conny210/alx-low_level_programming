#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function
 * @head: pointer to pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	while (*head != NULL)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
	*head = NULL;
}

