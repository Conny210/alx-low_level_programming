#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

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
	unsigned char *p = (unsigned char *)main;
	int i;

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

	for (i = 0; i < x; i++)
	{
		printf("%02x ", p[i]);
	}

	return (0);
}
