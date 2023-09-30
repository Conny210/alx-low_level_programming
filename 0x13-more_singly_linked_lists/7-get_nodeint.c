#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: pointer
 * @index:int
 *
 * Return: head or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}

