#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two variables
 * @argc: count of arguments
 * @argv: array
 * Return: 0 (sucess) OR 1 (error)
 */

int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	product = a * b;

	printf("%d\n", product);
	return (0);
}
