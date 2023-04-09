#include "lists.h"

/**
 * pop_listint - Deletes head of linked list
 *
 * @head: pointer to pointer to head node
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int m;
	listint_t *d;

	if (*head == NULL)
		return (0);

	d = *head;
	m = d->n;
	*head = d->next;
	free(d);

	return (m);
}
