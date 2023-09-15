#include "dog.h"

/**
 * init_dog - initializes var
 *
 * @d: pointer to var
 * @n: sring of dog name
 * @a: float of dogs age
 * @o: string od owner name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *n, float a, char *o)
{
	if (d == 0)
		return;

	d->name = n;
	d->age = a;
	d->owner = o;
}
