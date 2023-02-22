#include "main.h"
#include <ctype.h>
/**
* _islower - print 1 for c is lowercase alphabet
* @c: character to test
* Return: 1 (True) else 0 (False)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
