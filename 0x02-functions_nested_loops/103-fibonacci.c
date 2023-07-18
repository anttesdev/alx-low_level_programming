#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	unsigned long int y, z, a, sum;

	y = 1;
	z = 2;
	sum = 0;

	for (x = 1; x <= 33; ++x)
	{
		if (y < 4000000 && (y % 2) == 0)
		{
			sum = sum + y;
		}
		a = y + z;
		y = z;
		z = a;
	}

	printf("%lu\n", sum);

	return (0);
}

