#include <stdio.h>

/**
 * main - function prints compiler file name
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	printf("This program is compiled from the file: %s\n", __FILE__);
	return (0);
}
