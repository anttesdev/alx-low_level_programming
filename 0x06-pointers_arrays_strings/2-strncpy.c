#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: first string
 * @src: second string
 * @n: inpute value
 * Return: copied dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;

	while (length < n && src[length] != '\0')
	{
		dest[length] = src[length];
			
		length++;
	}

	while (length < n)
	{
		dest[length] = '\0';
	
		length++;
	}

	return (dest);
}
