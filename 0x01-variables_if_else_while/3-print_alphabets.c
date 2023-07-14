#include <stdio.h>
/**
 * main -entry point of function
 * Description: a function that prints both lowercase and uppercase alphabet
 * Return: (0) means success
 */
int main(void)
{
	char low[26] = "abcdefghijklmnopqrstuvwxyz";
	char up[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	int j = 0;

	while (i < 26)
{	putchar(low[i]);
	i++;
}
	while (j < 26)
{	putchar(up[j]);
	j++;
}
	putchar('\n');
	return (0);
}
