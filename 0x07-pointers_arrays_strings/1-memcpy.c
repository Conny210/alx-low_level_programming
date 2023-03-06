#include "main.h"
/**
 * _memcpy - copies memmory area
 * @src: memory area
 * @n: number of bytes
 * @dest: pointer
 *
 * Return: A ponter to the memory of s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		dest[x] = *src;
		x++;
	}

	return (dest);
}
