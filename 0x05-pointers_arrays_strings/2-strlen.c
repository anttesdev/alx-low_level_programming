#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: parameter of string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; length++)
	{
		s++;
	}

	return (length);

}
