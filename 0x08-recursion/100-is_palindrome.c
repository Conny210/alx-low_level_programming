#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @str: string
 * Return: int
 */

int is_palindrome(char *str)
{
	int length = _strlen_recursion(str);
	int start = 0;

	if (length == 0)
		return (1);
	return (palindrome_check(str, length - 1, start));
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = _strlen_recursion(s + 1);
	return (len + 1);
}

/**
 * palindrome_check - returns 1 if palindrome and 0 if not
 *
 * @str: string
 * @length: length of string
 * @index: counter variable
 * Return: int
 */

int palindrome_check(char *str, int length, int index)
{
	if (length == index)
		return (1);
	else if (str[length] != str[index])
		return (0);
	if (index < length)
		return (palindrome_check(str, --length, ++index));
	return (1);
}

