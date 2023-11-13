#include "main.h"


/**
 * _memset -cfills the first n bytes pointed by s and with a constant byte b
 * @s: pointer argument of memory area
 * @b: constant byte used
 * @n: the number of bytes used
 * Return: s memory area with b and n parameters included
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
