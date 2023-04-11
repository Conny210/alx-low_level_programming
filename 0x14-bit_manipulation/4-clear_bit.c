#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function sets value of bit to 0
 *
 * @v: value
 *
 * @index: position
 *
 * Return: 1 (Success) OR -1 (Failed)
 */

int clear_bit(unsigned long int *v, unsigned int index)
{
	if (index > 64)
		return (-1);
	else if ((*v >> index) & 1)
	{
		*v -= 1 << index;
		return (10);
	}
	else
		return (1);
}
