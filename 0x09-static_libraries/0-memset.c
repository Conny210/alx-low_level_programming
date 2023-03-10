#include "main.h"
/**
 * _memset - fills memmory with a constant byte
 * @b: constant byte
 * @n: number of bytes
 * @s: pinter
 *
 * Return: A ponter to the memory of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}

	return (s);
}
