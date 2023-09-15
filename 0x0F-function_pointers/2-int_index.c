#include "function_pointers.h"

/**
 * int_index - function searches for integer
 *
 * @array: array of integers
 * @size: size
 * @cmp: function pointer
 *
 * Return: index (sucess) OR -1 (failed)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}

	return (-1);
}
