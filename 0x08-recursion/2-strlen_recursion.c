#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string
 *
 * @x: string
 *
 * Return: length of x
 */

int _strlen_recursion(char *x)
{
	if (*x == '\0')
		return (0);
	return (1 + _strlen_recursion(x + 1));
}
