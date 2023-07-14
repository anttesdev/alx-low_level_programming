#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point for a last digit function
 * Description: more headers goes there
 * Return: (0) it is a sucess
 * betty style doc for function main 
 */
int main(void)
{
	int n;

	int d = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (d > 5)
{	printf("Last digit of %d is %d and is greater than 5\n", n, d);
}
	else if (d == 0)
{	printf("Last digit of %d is %d and is 0\n", n, d);
}
	else
{	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
}
	return (0);
}
