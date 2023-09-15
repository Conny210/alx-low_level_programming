#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - function prints opcodes
 * @x: integer
 */

void print_opcodes(int x)
{
	unsigned char *p = (unsigned char *)print_opcodes;
	int i;

	for (i = 0; i < x; i++)
	{
		printf("%02x", p[i]);

		if (i < x - 1)
		{
			printf(" ");
		}
	}

	printf("\n");
}

/**
 * main - prints name
 * @argc: name
 * @argv: arguments
 *
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (x < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(x);

	return (0);
}
