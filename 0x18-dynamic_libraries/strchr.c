#include "main.h"
#include <stdio.h>

/**
 * _strchr - returning pointer to the first occurence of a charachter c
 * @c: charachter in the string
 * @s: string to be checked
 * Return: pointer to the first charachter occurence or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

