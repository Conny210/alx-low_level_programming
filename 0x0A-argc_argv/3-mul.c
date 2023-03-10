#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: pointer of arrays to strings
 *
 * Return: 0 (success) else 1 (failure)
 */
int main(int argc, char *argv[])
{
	int x, sum =1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (x = 1; x < argc; x++)
		sum *= atoi(argv[x]);
	printf("%d\n", sum);
	return (0);
}
