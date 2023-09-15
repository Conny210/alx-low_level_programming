#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - function prints strings
  * @separator: string
  * @n: number of strings
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i = 0;
	char *s;

	if (n > 0)
	{
		va_start(a, n);

		while (i < n)
		{
			s = va_arg(a, char *);
			if (s == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", s);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);

			i++;
		}

		va_end(a);
	}

	printf("\n");
}
