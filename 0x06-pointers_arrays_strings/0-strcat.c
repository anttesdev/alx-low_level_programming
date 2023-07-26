#include "main.h"

/**
 * *_strcat - deletes the null byte and concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: added string
 */

char *_strcat(char *dest, char *src)
{
	int length1 = 0;

	while (dest[length1] != '\0')
	{
		length1++;
	}

	int length2 = 0;

	while (src[length2] != '\0')
	{
		dest[length1] = src[length2];

		length1++;
		length2++;
	}

	dest[length1] = '\0';

	return (dest);
}
