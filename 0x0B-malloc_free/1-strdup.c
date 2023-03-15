#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	int x;
	char *d;

	if (str == 0)
		return (0);
	for (x = 0; str[x]; x++)
		;
	d = malloc(sizeof(char) * (x + 1));
	if (d == 0)
		return (0);
	d[x] = '\0';
	while (x--)
	{
		d[x] = str[x];

	}
	return (d);
}
