#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function returns number of bits that need to be flipped
 *
 * @v0: start value
 *
 * @v1: end value
 *
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int v0, unsigned long int v1)
{
	unsigned int b = 0;
	unsigned long int r;

	r = v0 ^ v1;

	while (r)
	{
		b++;
		r &= (r - 1);
	}

	return (b);
}
