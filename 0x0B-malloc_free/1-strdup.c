#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: string to be duplicated
 * Return pointer to the new string
 */

char *_strdup(char *str)
{
	char *s;
	int x;

	s = malloc(sizeof(str) + 1);

	if (str == NULL)
		return (NULL);

	for (x = 0; x < str[x]; x++)
	{
		s[x] = str[x];
	}

	return (s);
}
