#include "main.h"

/**
 * _puts - prints a string to stdout
 * @s: string parameter
 */

void _puts(char *s)
{
	for (; *s != '\0';)
	{
		_putchar(*s++);
	}

		_putchar('\n');
}
