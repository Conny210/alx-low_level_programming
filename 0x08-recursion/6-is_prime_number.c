#include "main.h"

/**
 * check_prime - returns 1 if the input integer is a prime number,
 * otherwise returns 0
 *
 * @num: number
 * @divisor: divisor
 * Return: int
 */

int check_prime(int num, int divisor)
{
	if (num != divisor && num % divisor == 0)
		return (0);
	else if (num == divisor)
		return (1);
	return (check_prime(num, divisor + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise returns 0
 *
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	int start_divisor = 2;

	if (n <= 2)
		return (n == 2 ? 1 : 0);
	if (n % 2 == 0)
		return (0);
	return (check_prime(n, start_divisor));
}

