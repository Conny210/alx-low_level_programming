#include "variadic_functions.h"

/**
 * sum_them_all - calculates sum
 * @count: argument count
 *
 * Return: sum
 */

int sum_them_all(const unsigned int count, ...)
{
	va_list arguments;
	unsigned int i = 0;
	int sum = 0;

	if (count != 0)
	{
		va_start(arguments, count);

		while (i < count)
		{
			sum += va_arg(arguments, int);
			i++;
		}

		va_end(arguments);

		return (sum);
	}

	return (0);
}

