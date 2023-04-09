#include "lists.h"

/**
 * sum_listint - gets sum of all data in linked list
 *
 * @head: pointer to head
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int tot;
	listint_t *now;

	for (tot = 0, now = head; now != NULL; now = now->next)
		tot += now->n;

	return (tot);
}
