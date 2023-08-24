#include <stdio.h>

void _executeF(void) __attribute__ ((constructor));

/**
 * _executeF - a function that executes before the main
 * Return: nothing
 */

void _executeF(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}



