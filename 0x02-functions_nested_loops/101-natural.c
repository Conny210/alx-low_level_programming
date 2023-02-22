#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int total = 0;

	while (a < 1024)
	{
		if (a % 3 == 0)
			total += a;
		else if (a % 5 == 0)
			total += a;

		a++;
	}
	printf("%d\n", total);

	return (0);
}
