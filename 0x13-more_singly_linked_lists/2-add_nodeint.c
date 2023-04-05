#include "lists.h"

static listint_t *new_node(const int n);

/**
 * add_nodeint - adds node
 *
 * @head : pointer to a pointer
 *
 * @n : value
 *
 * Return: address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!(*head))
	{
		*head = new_node(n);
		return (*head);
	}

	new = new_node(n);
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * new_node - creates new listint_t node
 *
 * @n: value inside node
 *
 * Return: NULL
 */

static listint_t *new_node(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}
