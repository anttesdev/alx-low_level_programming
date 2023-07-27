#include "main.h"

/**
 * string_toupper - changes all lowercase elements of string to uppercase
 * @p: pointer input
 * Return: uppercase string p
 */

char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] = p[i] - 32;
		}
	}

	return (p);
}
