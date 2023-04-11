#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function checks endianness
 *
 * Return: 0 (Big endian) OR 1 (Little endian)
 */

int get_endianness(void)
{
	int x = 1;
	char *l = (char *)&x;

	if (*l == 1)
		return (1);
	else
		return (0);
}
