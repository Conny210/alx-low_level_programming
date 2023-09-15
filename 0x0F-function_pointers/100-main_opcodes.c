#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints opcodes
 *
 * @argc: count
 * @argv: vector
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int x, (*y)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	printf("%.2x", *(unsigned char *)y);
	y++;

	for (x = 1; x < atoi(argv[1]); x++)
	{
		printf(" %.2x", *(unsigned char *)y);
		y++;
	}

	printf("\n");

	return (0);
}
