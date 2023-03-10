#include "main.h"
/**
 * _strncat - concatenates two strings together
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number of elements to be concatenated
 * Return: the pointer 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, g;

	for (x = 0; dest[x] != '\0'; x++)
		;

	for (g = 0; src[g] != '\0' && n > 0; g++, n--, x++)
	{
		dest[x] = src[g];
	}
	return (dest);
}
