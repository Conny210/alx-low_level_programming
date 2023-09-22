#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/*
 * add_node - add_node - function adds new node
 * Description: ...
 *
 * @head: pointer to pointer
 * @str: pointer
 *
 * Return: new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *str_copy = strdup(str);
	list_t *w = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (w == NULL)
		return (NULL);
	if (str_copy == NULL)
	{
		free(w);
		return (NULL);
	}
	w->str = str_copy;
	w->len = strlen(str_copy);
	w->next = *head;

	*head = w;
		return (w);
}

