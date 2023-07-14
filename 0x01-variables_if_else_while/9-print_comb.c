#include <stdio.h>
/**
 * main - enttry point od function
 * Description: numbers printed with ', ' in between
 * Return: (0) is a sucess
 */

int main(void)
{
	int i = 48;

	while (i < 58)
{	putchar(i);
	putchar(',');
	putchar(' ');
	i++;
}

	putchar('\n');
	return (0);
}
