#include "main.h"
/**
 * print_alphabet_x10 - a program that prints the aplhabet 10 times
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		char alph;

		for (alph = 'a' ; alph <= 'z' ; alph++)

		{

		_putchar(alph);
		}

		_putchar('\n');
	}

}
