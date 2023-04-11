#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary number to unsigned int
 *
 * @b: string with char
 *
 * Return: Converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x, y;

	if (!b || !*b)
		return (0);

	x = y = 0;
	while (b[y])
	{
		if (b[y] > 49)
			return (0);
		else if (b[y] == 49)
		{
			x <<= 1;
			x += 1;
		}
		else
			x <<= 1;
		y++;
	}
	return (x);
}
