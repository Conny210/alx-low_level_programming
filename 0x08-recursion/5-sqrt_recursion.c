#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion: Returns the natural square root of a number
 *
 * @i: Number
 *
 * Return: The natural square root of 'i' if it exists, -1 otherwise
 */

int _sqrt_recursion(int i);
{
	if (i < 0)
	{
		return (-1); /** Error: Negative input */
	}
	else if (i == 0 || i == 1)
	{
		return (i); /** Base cases: Square of 0 or 1 is itself */
	}
	else
	{
		return (is_sqrt(i, 2)); /** tests square root from 2 */
	}
}

int is_sqrt(int i, int skwer);

/**
 * is_sqrt: Helper function to check for the natural square root
 *
 * @i: Number
 * @skwer: Test case
 * Return: The natural square root of 'i' if it exists, -1 otherwise.
 */

{
	if (skwer * skwer == i)
	{
		return (skwer); /** Found the natural square root */
	}
	else if (skwer * skwer < i)
	{
		return (is_sqrt(i, skwer + 1)); /** Continue searching */
	}
	else
	{
		return (-1); /** No natural square root found */
	}
}
