#include <stdio.h>
/**
* main -Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		b = a + 1;
		do {
			putchar('0' + a);
			putchar('0' + b);
			if (a < 8)
			{
				putchar(',');
				putchar(32);
			}
			b++;
		} while (b < 10);
	}
	putchar('\n');
	return (0);
}
