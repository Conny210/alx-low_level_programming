#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function adds new node
 * @head: pointer to pointer
 * @n: n
 *
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *e = malloc(sizeof(listint_t));

	if (e == NULL)
		return (NULL);

	e->n = n;
	e->next = NULL;

	if (*head == NULL)
	{
		*head = e;
	}
	else
	{
		listint_t *r = *head;

		while (r->next != NULL)
		{
			r = r->next;
		}
		r->next = e;
	}
	return (e);
}

