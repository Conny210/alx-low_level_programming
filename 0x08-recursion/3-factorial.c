#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @x: integer to be factorised
 * Return: integer
 */
int factorial(int x)
{
	if (x < 0)
		return (-1);
	else if (x == 0)
		return (1);
	return (x * factorial(x - 1));
}
