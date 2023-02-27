#include "main.h"

/**
  * _strlen - prints string
  * @i: string
  *
  * Return: Integer value of the length.
  */
int _strlen(char *i)
{
	int count = 0;

	while (*(i + count) != '\0')
	{
		count++;
	}
	return (count);
}
