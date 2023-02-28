#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int start, temp;

	int end - 0;

	while (*(s + end) != '\0')
	{
		end++;
	}

	end -= 1;
	start = 0;

	while (end > start)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
