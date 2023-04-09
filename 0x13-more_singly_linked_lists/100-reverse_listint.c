#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - Reverses linked list
 *
 * @head: double pointer to head
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *d;
	listint_t *c0;

	if (*head == NULL)
		return (NULL);

	c0 = *head;
	*head = c0->next;
	d = (*head)->next;
	c0->next = NULL;
	if (*head == NULL)
	{
		*head = c0;
		return (c0);
	}

	while (d != NULL)
	{
		(*head)->next = c0;
		c0 = *head;
		*head = d;
		d = (*head)->next;
	}

	(*head)->next = c0;
	return (*head);
}
