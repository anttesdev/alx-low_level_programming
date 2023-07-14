#include <stdio.h>
/**
 * main - entry point of function
 * Descripton: function that prints out lowercase alphabet
 * Return: (0) is always a sucess
 */
int main(void)
{
	char alph[26] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
{	putchar(alph[i]);
}
	putchar('\n');
	return (0);
}
