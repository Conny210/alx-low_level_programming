#include "lists.h"

/**
 * add_nodeint_end - adds new node to tail
 *
 * @h: double pointer to head
 *
 * @n: int value to store in new node
 *
 * Return: Address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *n0;
	listint_t *n1;

	n0 = *h;
	while (n0 && n0->next != NULL)
		n0 = n0->next;

	n1 = malloc(sizeof(listint_t));
	if (n1 == NULL)
		return (NULL);
	n1->n = n;
	n1->next = NULL;

	if (n0)
		n0->next = n1;
	else
		*h = n1;
	return (n1);
}
