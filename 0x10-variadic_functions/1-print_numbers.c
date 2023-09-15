#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - function prints numbers
  * @separator: string
  * @n: number of integers
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int x = 0;

	if (n > 0)
	{
		va_start(a, n);

		while (x < n)
		{
			printf("%d", va_arg(a, int));

			if (x != n - 1  && separator != NULL)
				printf("%s", separator);

			x++;
		}
		va_end(a);
	}
	printf("\n");
}
