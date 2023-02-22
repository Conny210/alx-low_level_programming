#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet(void) /**  Description: 'printing lowercase alphabet' */
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
