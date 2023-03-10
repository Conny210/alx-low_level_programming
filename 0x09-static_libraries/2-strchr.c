#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string to search for the character in
 * @c: char
 *
 * Return: pointer to char or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c)
			return ((s + x));
		x++;
	}
	if (c == '\0')
		return ((s + x));
	return (NULL);
}
