#include "main.h"

/**
 * *_strcat - deletes the null byte and concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: added string
 */

char *_strcat(char *dest, char *src)
{
	int length;

	for (length = 0; ; length++)
	{
		if (length != '\0')
		{
			_putchar(*dest++);
		}

		else if (length == '\0')
		{
			_putchar(' ');
		}
	}

	int x;

	for (x = 0; ; x++)
	{
		_putchar(*src++);
	}
}
