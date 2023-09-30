#include "lists.h"

/**
 * reverse_listint - function
 * @head: pointer to pointer
 *
 * Return:head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *rest;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	first = *head;
	rest = first->next;

	reverse_listint(&rest);
	first->next->next = first;
	first->next = NULL;

	*head = rest;
	return (*head);
}

