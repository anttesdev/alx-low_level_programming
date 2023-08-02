#include "main.h"


/**
 * pri - checks for if a number is prime recursively
 * @n: integer argument
 * @x: integer iteration argument
 *
 * Return: 1 if n is prime, 0 if not
 */
int pri(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (pri(n, x - 1));
}

/**
 * is_prime_number - checks wether a number is prime or not
 * @n: integer argument
 * Return:if n is a prime number 1, if not 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (pri(n, n - 1));
}


