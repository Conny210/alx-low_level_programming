#include <stdlib.h>
#include "main.h"

/**
  * _realloc - reallocates memory
  * @ptr: pointer
  * @old_size: size
  * @new_size: size
  *
  * Return: pointer (sucess) OR NULL (failed)
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		p = malloc(new_size);
		if (p == NULL)
			return (p);
		for (x = 0; x < old_size; x++)
			p[x] = *((char *)ptr + 1);
		free(ptr);
	}

	return (p);
}
