#include "main.h"

/**
 * rev_string - reverses a string
 * @w: string to be reversed
 */

void rev_string(char *w)
{
	int start, temp;

	int end - 0;

	while (*(w + end) != '\0')
	{
		end++;
	}

	end -= 1;
	start = 0;

	while (end > start)
	{
		temp = w[start];
		w[start] = w[end];
		w[end] = temp;
		start++;
		end--;
	}
}
