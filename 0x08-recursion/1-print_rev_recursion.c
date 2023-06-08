#include "main.h"

/**
 * _print_rev_recursion - recursive function that prints strin in reverse
 *
 * @x: string
 */

void _print_rev_recursion(char *x)
{
	if (*x == '\0')
		return;
	_print_rev_recursion(x + 1);
	_putchar(*x);
}
