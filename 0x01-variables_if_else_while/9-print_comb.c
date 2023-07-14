#include <stdio.h>
/**
 * main - enttry point od function
 * Description: numbers printed with ', ' in between
 * Return: (0) is a sucess
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
{
	if (i < 57)
{	putchar(i);
	putchar(',');
	putchar(' ');
}
	else
{	putchar(i);
}
}
	return (0);
}
