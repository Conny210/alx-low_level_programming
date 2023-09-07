#include <stdio.h>

/**
 * main - prints program name
 * @argc: count of arguments
 * @argv: array to pointers of strings
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
