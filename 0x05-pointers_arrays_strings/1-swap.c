#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @x: integer one
 * @y: integer two
 */
void swap_int(int *x, int *y)
{
	int temp;

	temp = *x;

	*x = *y;
	*y = temp;
}
