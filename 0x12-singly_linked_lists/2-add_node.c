#include "lists.h"
#include <string.h>

/**
 * add_node - adds node to the head
 *
 * @head: address to node list_t
 *
 * @str: string
 *
 * Return: pointer to a list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *w;
	size_t len = 0;

	w = malloc(sizeof(list_t));
	if (!w)
		return (NULL);

	while (str[len])
		len++;
	w->len = len;

	w->str = strdup(str);
	if (!(*head))
		w->next = NULL;
	else
		w->next = *head;
	*head = w;

	return (*head);
}
