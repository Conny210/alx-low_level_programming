#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int a, e, f;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%.8x:", a);
			for (e = a; e < a + 10; e++)
			{
				if (e % 2 == 0)
					printf(" ");
				if (e < size)
					printf("%.2x", *(b + e));
				else
					printf("  ");
			}
			printf(" ");
			for (f = a; f < a + 10; f++)
			{
				if (f >= size)
					break;
				if (*(b + f) < 32 || *(b + f) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + f));
			}
			printf("\n");
		}
	}
}
