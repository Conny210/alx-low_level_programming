#include "main.h"

/**
 * _puts_recursion - recursive function, prints a string followed by new line
 *
 * @x: string
 */

void _puts_recursion(char *x)
{
	if (*x == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*x);
	_puts_recursion(++x);
}

