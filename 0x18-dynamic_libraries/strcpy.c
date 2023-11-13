#include "main.h"

/**
 * *_strcpy - function that copies a string pointed to by src
 * @dest : to be copied to
 * @src: copied from
 * Return: string that is copied form src
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}

	while (y < x)
	{
		dest[y] = src[y];
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
