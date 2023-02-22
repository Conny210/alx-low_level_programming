#include "main.h"
/**
* print_alphabet_x10 - print lowercase alphabet ten times
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char i;
	int v;

	for (v = 0; v < 10; v++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
