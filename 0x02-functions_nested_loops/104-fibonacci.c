#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int x;
	unsigned long int y = 1;
	unsigned long int z = 2;
	unsigned long int l = 1000000000;
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;
	unsigned long int f;

	printf("%lu", y);

	for (x = 1; x < 91; x++)
	{
		printf(", %lu", z);
		z += y;
		y = z - y;
	}

	a = (y / l);
	b = (y % l);
	c = (y / l);
	f = (z % l);

	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", c + (f / l));
		printf("%lu", f % l);
		c = c + a;
		a = c - a;
		f = f + b;
		b = f - b;
	}
	printf("\n");
	return (0);
}

