#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of specifc size and fills it with a char
 *
 * @size: size of array
 *
 * @c: char
 *
 * Return: an array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *ar;

	if (size <= 0)
		return (0);
	ar = malloc(size);
	if (ar == 0)
		return (0);
	x = 0;
	while (x < size)
	{
		ar[x] = c;
		x++;
	}
	return (ar);
}
