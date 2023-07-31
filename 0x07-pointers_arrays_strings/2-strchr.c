#include "main.h"

/**
 * _strchr - returning pointer to the first occurence of a charachter c
 * @c: charachter in the string
 * @s: string to be checked
 * Return: pointer to the first charachter occurence or NULL
 */


char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; x >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}

		return (0);
}

