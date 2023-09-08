#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 *
 * @str: string to duplicate
 * Return: pointer (sucess) OR NULL (failed)
 */

char *_strdup(char *str)
{
	char *c;
	size_t size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);

	c = (char *)malloc(sizeof(char) * (size + 1));
	if (c == NULL)
		return (NULL);

	strcpy(c, str);
	return (c);
}


