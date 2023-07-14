#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * a function that returns whether a value is positive, negative or zero
 * main - Entry point of this function to check for values
 * Return: (0) is a success
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;

	if (n > 0)
{	printf("is positive\n");
}
	else if (n == 0)
{	printf("is zero\n");
}
	else if (n < 0)
{	printf("is negative\n");
}
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
