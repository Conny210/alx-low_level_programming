#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 100)
	{
		n++;
		if ((n % 3) != 0 && (n % 5) != 0)
		{
			printf("%d", n);
		}
		else if ((n % 3)  == 0 && (n % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((n % 3) != 0 && (n % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("FizzBuzz");
		}
		if (n < 100)
			putchar(32);
	}
	putchar('\n');
	return (0);
}
