#include <stdio.h>
/**
 * main - entry point of function
 * Description: numbers printed with ', ' in between
 * Return: (0) is a sucess
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{

	putchar(i);

	if (i < 57)
		{
		putchar(',');
		putchar(' ');
		}
	else
		{
		continue;
		}
	}

	putchar('\n');
	return (0);
}
