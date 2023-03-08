#include "main.h"
/**
 * _pow_recursion - returns value of x^y
 *
 * @x: value
 *
 * @y: exponent
 *
 * Return: sum
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, --y));
}
