#include "main.h"

/**
 * print_triangle - print a triangle at a give size.
 * @size : size of triangle to print.
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, t;

	if (size <= 0)
		_putchar('\n');
	for (i = 1 ; i <= size ; i++)
	{
		for (t = 1; j <= size; t++)
		{
			if (t <= (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
