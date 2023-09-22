#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function adds new node
 * @head: pointer to pointer
 * @str: pointer
 *
 * Return:new_node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *w = malloc(sizeof(list_t));
	char *s = strdup(str);

	if (str == NULL)
		return (NULL);

	if (w == NULL)
		return (NULL);
	if (s == NULL)
	{
		free(w);
		return (NULL);
	}

	w->str = s;
	w->len = strlen(s);
	w->next = NULL;

	if (*head == NULL)
	{
		*head = w;
	} else
	{
		list_t *e = *head;

		while (e->next != NULL)
		{
			e = e->next;
		}
		e->next = w;
	}
	return (w);
}

