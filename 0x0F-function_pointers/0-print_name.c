#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: string pointer to name
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	else
		f(name);
}
