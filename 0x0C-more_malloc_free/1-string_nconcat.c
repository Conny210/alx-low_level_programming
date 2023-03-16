#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - fuction concats two strings
 *
 * @s1: base sting to concat to
 *
 * @s2: string to copy from
 *
 * @n: amount of s2 to copy
 *
 * Return: pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x, y, z;

	y = z = 0;
	if (s1)
		for (; s1[y]; y++)
			;
	if (s2)
		for (; s2[z]; z++)
			;
	if (!(n >= z))
		z = n;

	s = malloc(sizeof(char) * (y + z) + 1);
	if (!s)
		return (NULL);

	for (x = 0; x < (y + z); x++)
	{
		if (x < y)
			s[x] = s1[x];
		else
			s[x] = s2[x - y];
	}

	s[x] = '\0';

	return (s);
}
