#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 *
 * @a: array of integers
 *
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int p;
	int h;

	for (p = 0; p < (n / 2); p++)
	{
		h = a[p];
		a[p] = a[n - p - 1];
		a[n - p - 1] = h;
	}
}
