#include <stdlib.h>
#include <stdio.h>

/**
 * main - sums positive integers
 *
 * @argc: count of arguments
 * @argv: array
 * Return: 0 (sucess) OR 1 (error)
 */
int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!((argv[a][b] >= '0' && argv[a][b] <= '9') || argv[a][b] == '-'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
