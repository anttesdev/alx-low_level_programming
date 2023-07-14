#include <stdio.h>
/**
 * main - entry point of function
 * Descripton: function that prints out lowercase alphabet
 * Return: (0) is always a sucess
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
{	putchar(alph[i]);
}
	putchar('\n');
	return (0);
}
