#include <stdio.h>

/**
 * pbm - function to print the message before main
 */

void __attribute__((constructor)) pbm(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

