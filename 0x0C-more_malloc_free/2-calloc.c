#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory
 *
 * @nmemb: members of array
 * @size: size
 * Return: pointer (sucess) OR NULL (failed)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (a);
	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;
	return (a);
}
