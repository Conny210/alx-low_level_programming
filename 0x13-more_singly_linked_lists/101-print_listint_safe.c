#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next && current->next <= current)
		{
			fprintf(stderr, "Linked list has a loop\n");
			exit(98);
		}
		current = current->next;
	}
	return (count);
}

