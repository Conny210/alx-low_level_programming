#include "main.h"

/**
 * _strncpy - copies string
 * Description: 'copies string'
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number of chars to copy over
 * Return: 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[y] = src[y];

	for (; n > y; y++)
		dest[y] = '\0';

	return (dest);
}
