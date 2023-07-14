#include <stdio.h>
/**
 * main - entry point of function
 * Description: prints out all the hexadecimal numbers
 * Return: (0) is a sucess
 */

int main(void)
{
	int i = 48;

	int j = 0;

	char alp[6] = "abcdef";

	while (i < 58)
{	putchar(i);
	i++;
}

	for (j = 0; j < 6 ; j++)
{	putchar(alp[j]);
}
	putchar('\n');
	return (0);
}
