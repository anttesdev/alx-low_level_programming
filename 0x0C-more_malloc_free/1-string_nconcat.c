#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes allocatedto be concatenated from s2
 * Return: NULL or concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d = 0, e = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a];)
		a++;
	for (b = 0; s2[b];)
		b++;

	if (n >= b)
		c = a + b;
	else if (n < b)
		c = a + n;

	s = malloc(sizeof(char) * c + 1);

	if (s == NULL)
		return (NULL);

	while (d < a)
	{
		s[d] = s1[d];
		d++;
	}

	while (n < b && d < (a + n))
		s[d++] = s2[e++];

	while (n >= b && d < (a + b))
		s[d++] = s2[e++];

	s[d] = '\0';
	return (s);
}
