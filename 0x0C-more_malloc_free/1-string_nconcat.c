#include <stdlib.h>

/**
 * *string_nconcat - concatenates strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: number of bytes
 *
 * Return: pointer (sucess) OR NULL (failed)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i1, i2, l1, l2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	l1 = 0;
	while (*(s1 + l1))
		l1++;
	l2 = 0;
	while (*(s2 + l2))
		l2++;
	if (n >= l2)
		n = l2;
	s = malloc(sizeof(char) * (l1 + n + 1));
	if (s == 0)
		return (0);
	for (i1 = 0; i1 < l1; i1++)
		*(s + i1) = *(s1 + i1);
	for (i2 = 0; i2 < n; i2++, i1++)
		*(s + i1) = *(s2 + i2);
	*(s + i1) = '\0';
	return (s);
}
