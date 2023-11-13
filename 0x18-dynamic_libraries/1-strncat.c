#include "main.h"

/**
 * _strncat- function that concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: number of bytes that it uses from src
 * Return: dest concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length1, length2;

	length1 = 0;

	while (dest[length1] != '\0')
	{
		length1++;
	}

	length2 = 0;

	while (length2 < n && src[length2] != '\0')
	{
		dest[length1] = src[length2];

		length1++;
		length2++;
	}

	dest[length1] = '\0';

	return (dest);
}

