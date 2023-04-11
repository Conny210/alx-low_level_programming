#include "main.h"
#include <stdio.h>

/**
 * print_binary - function prints binary representation
 *
 * @x: value
 */

void print_binary(unsigned long int x)
{
	if (x > 1)
	{
		print_binary(x >> 1);
	}
	_putchar((x & 1) + '0');
}
