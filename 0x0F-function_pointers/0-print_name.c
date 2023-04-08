#include "function_pointers.h"

/**
 * print_name - prints name
 *
 * @name: string to be printed
 *
 * @f: function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}