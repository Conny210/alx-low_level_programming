#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @c: value
 */
void print_rev(char *c)
{
	int count;

	while (*(c + count) != '\0')
	{
		count++;
	}

	while (count--)
	{
		_putchar(*(c + (count)));
	}
	_putchar('\n');
}
