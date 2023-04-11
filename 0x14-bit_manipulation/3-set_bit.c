#include "main.h"
#include <stdio.h>

/**
 * set_bit - function sets value of bit to 1
 *
 * @v: pointer to a value
 *
 * @index: position
 *
 * Return: 1 (Success) OR -1 (Failed)
 */

int set_bit(unsigned long int *v, unsigned int index)
{
	if (index > 64)
		return (-1);
	else if (!((*v >> index) & 1))
	{
		*v += 1 << index;
		return (1);
	}
	else
		return (-1);
}
