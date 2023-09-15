#include "function_pointers.h"

/**
 * array_iterator - executes function
 *
 * @array: pointer
 * @size: size
 * @action: function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	size_t x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
