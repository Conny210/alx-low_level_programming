#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first char type string
 * @src: second char type string
 * Return:pointer to resulting string 'dest'
 */

char *_strcat(char *dest, char *src);
{
	int h, j;

	for (h =0; dest[h] != '\0'; h++);

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[h] = src[j];
		h++;
	}

	dest[i] = '\0';
	return (dest);
}
