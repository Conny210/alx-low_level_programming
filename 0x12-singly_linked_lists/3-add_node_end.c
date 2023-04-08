#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * add_node_end - adds new node at tail
 *
 * @head: double pointer to list
 *
 * @str: string
 *
 * Return: address or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *w;
	list_t *p = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	w = malloc(sizeof(list_t));
	if (!w)
		return (NULL);

	w->str = strdup(str);
	w->len = len;
	w->next = NULL;

	if (*head == NULL)
	{
		*head = w;
		return (w);
	}

	while (p->next)
		p = p->next;

	p->next = w;

	return (w);
}
