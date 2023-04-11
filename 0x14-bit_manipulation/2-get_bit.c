#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * get_bit - function returns value of bit
 *
 * @w: value
 *
 * @index: bit
 *
 * Return: value of bit OR -1
 */

int get_bit(unsigned long int w, unsigned int index)
{
	int value;

	value = ((w >> index) & 1);
	if (index > 64)
		return (-1);
	else
		return (value);
}
