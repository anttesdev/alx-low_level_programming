#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int fibC;
	unsigned long f1 = 0, f2 = 1, sum;

	for (fibC = 0; fibC < 50; fibC++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (fibC == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}


