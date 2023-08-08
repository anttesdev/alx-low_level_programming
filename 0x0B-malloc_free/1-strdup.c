#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: string to be duplicated
 * Return: pointer to the new string
 */

char *_strdup(char *str)
{
	char *s;
	int x;
	int y;

	for (x = 1; str[x] != '\0';)
	{
		x++;
	}

	s = malloc((sizeof(char) * x) + 1);

	if (*str == NULL)
		return (NULL);

	if (s == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
	{
		s[y] = str[y];
	}
	
	s[y] = '\0';
	
	return (s);
}
