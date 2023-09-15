#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function add two values
 * @a: integer 1
 * @b: integer 2
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subtracts two values
 * @a: integer 1
 * @b: integer 2
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two values
 * @a: integer 1
 * @b: integer 2
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divides two values
 * @a: integer 1
 * @b: integer 2
 *
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function gets modulo
 * @a: integer 1
 * @b: integer 2
 *
 * Return: modulo value
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
