#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	int b;
	int c;
	int d;

for (a = 0; a < 10; a++)
{
	for (b = 0; b <= 10; b++)
	{
		for (c = 0; c < 10; c++)
		{
			for (d = 1; d < 10; d++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar(32);
				putchar('0' + c);
				putchar('0' + d);
			}
		}
	}
}
putchar('\n');
return (0);
}