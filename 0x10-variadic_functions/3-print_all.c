#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_all - function prints anything
  * @format: list of arguments
  *
  */

void print_all(const char * const format, ...)
{
	va_list a;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(a, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, a);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(a);
	printf("\n");
}

/**
  * print_a_char - function prints char
  * @separator: string
  * @a: list of variadic arguments
  *
  */

void print_a_char(char *separator, va_list a)
{
	printf("%s%c", separator, va_arg(a, int));
}

/**
  * print_a_integer - function prints int
  * @separator: string
  * @a: list of variadic arguments
  *
  */

void print_a_integer(char *separator, va_list a)
{
	printf("%s%i", separator, va_arg(a, int));
}

/**
  * print_a_float - function prints float
  * @separator: string
  * @a: list of variadic arguments
  *
  */

void print_a_float(char *separator, va_list a)
{
	printf("%s%f", separator, va_arg(a, double));
}

/**
  * print_a_char_ptr - function prints content of pointer to char
  * @separator: string
  * @a: list of variadic arguments
  *
  * Return: nothing
  */

void print_a_char_ptr(char *separator, va_list a)
{
	char *ar = va_arg(a, char *);

	if (ar == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, ar);
}

