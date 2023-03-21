#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function initializes a dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
