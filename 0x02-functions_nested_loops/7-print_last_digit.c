#include "main.h"
/**
 * print_last_digit - prints last digit of a given number
 * @w: Unknown number given
 * Return: last digit
 */
int print_last_digit(int w)
{
	w %= 10;
	if (w < 0)
	{
		w *= -1;
	}
	_putchar('0' + w);
	return (w);
}
