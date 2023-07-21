#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x;
	long int add;
	long int i;

	x = 612852475143;
	add = -1;

	while (x % 2 == 0)
	{
		add = 2;
		x /= 2;
	}

	for (i = 3; i <= sqrt(x); i = i + 2)
	{
		while (x % i == 0)
		{
			add = i;
			x = x / i;
		}
	}

	if (x > 2)
		add = x;

	printf("%ld\n", add);

	return (0);
}

