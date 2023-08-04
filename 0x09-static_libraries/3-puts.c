#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string parameter
 */

void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str++);
	}

		_putchar('\n');
}
