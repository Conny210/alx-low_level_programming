#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function
 * @head: pointer to pointer
 *
 * Return: 0 (empty) or data (not empty)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = temp->n;

	if (*head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	free(temp);

	return (data);
}

