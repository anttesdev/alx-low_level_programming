#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of this function to check for values
 * Description:it returns whether a value is positive, negative or zero
 * Return: (0) is a success
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)

{	printf("%d is positive\n", n);

}
	else if (n == 0)

{	printf("%d is zero\n", n);

}

	else

{	printf("%d is negative\n", n);

}
	return (0);
}
