#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: test character
* Return: 1 (True) else 0 (False)
*/

int _isalpha(int c)
{
	if
		((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
