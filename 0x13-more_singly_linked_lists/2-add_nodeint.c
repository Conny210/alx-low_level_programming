#include "lists.h"

/**
 * add_nodeint - function adds new node
 * @head: pointer to pointer
 * @n: int
 *
 * Return: pointer to new node or NULL (failed)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *w = malloc(sizeof(listint_t));

	if (w == NULL)
		return (NULL);

	w->n = n;
	w->next = *head;

	*head = w;
	return (w);
}

