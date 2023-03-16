#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - fuction allocates memory and checks if sucessful
 *
 * @b: size of memory to allocate
 *
 * Return: pointer to memory else 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
