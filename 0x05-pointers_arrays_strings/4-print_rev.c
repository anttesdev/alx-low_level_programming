#include "main.h"

/**
 * print_rev - prints a reversed string
 * @s: string parameter
 */

void print_rev(char *s)
{
	int x;
	int length = 0;

	for (; *s != '\0'; length++)
	{
		s++;
	}

	s--;

	for (x = length; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
