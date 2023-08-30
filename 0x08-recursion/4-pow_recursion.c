#include "main.h"

/**
 * _pow_recursion - function returns value of a raised to the power of b
 *
 * @a: Base
 * @b: Exponent
 *
 * Return: result of 'a' raised to the power of 'b'
 */

int _pow_recursion(int a, int b)
{
	if (b < 0)
	{
		return (-1); /** Errorr: negative exponent */
	} else if (b == 0)
	{
		return (1); /** Base case: any # raised to 0 is 1 */
	}
	return (a * _pow_recursion(a, b - 1));
}
