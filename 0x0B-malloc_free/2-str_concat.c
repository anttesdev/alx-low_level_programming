#include "main.h"
#include <stdlib.h>


/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: Second string
 * Return: pointer to concatenated string
 */


char *str_concat(char *s1, char *s2)
{
	int x, y, z;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0';)
		x++;

	for (y = 0; s2[y] != '\0';)
		y++;

	z = x + y;

	s = malloc((sizeof(char) * z) + 1);

	if (s == NULL)
		return (NULL);


	for (x = 0; s1[x] != '\0'; x++)
	{
		s[x] = s1[x];
	}

	for (y = 0; s2[y] != '\0'; y++)
	{
		s[x] = s2[y];
		x++;
	}

	s[x] = '\0';

	return (s);
}
