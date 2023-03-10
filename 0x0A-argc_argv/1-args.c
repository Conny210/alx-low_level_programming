#include <stdio.h>

/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: array of pointers to strings
 *
 * Return: number of arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (argc - 1);
}
