#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination memory area
 * @src: source for memory area
 * @n: n bytes to be copied from src to dest
 * Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
