#include <stdlib.h>

/**
 * *array_range - creates an array
 * @min: min number
 * @max: max number
 *
 * Return: pointer (success) OR NULL (failed)
 */

int *array_range(int min, int max)
{
	int *a;
	int l, n, i;

	if (min > max)
		return (0);
	l = (max - min) + 1;
	a = malloc(sizeof(int) * l);
	if (a == 0)
		return (0);
	for (n = min, i = 0; n <= max; i++, n++)
		*(a + i) = n;
	return (a);
}
