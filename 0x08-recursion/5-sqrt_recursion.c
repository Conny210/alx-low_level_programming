#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 *
 * @d: digit
 * Return: integer
 */
int _sqrt_recursion(int d)
{
	int skwer = 2;

	if (d < 0)
		return (-1);
	else if (d == 0 || d == 1)
		return (d);
	return (is_sqrt(d, skwer));
}

/**
 * is_sqrt - function checks for natural square root
 *
 * @d: digit
 * @skwer: test number
 * Return: int
 */
int is_sqrt(int d, int skwer)
{
	if (skwer * skwer == d)
		return (skwer);
	else if (skwer * skwer < d)
		return (is_sqrt(d, skwer + 1));
	else if (skwer * skwer > d)
		return (-1);
	return (-1);
}
