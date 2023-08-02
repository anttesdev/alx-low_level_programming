#include "main.h"


/**
 * squart - recursion function to return square root
 * @n: integer argument
 * @x: possible square root integer
 * Return: -1 if no natural, x if square root, recursive
 */

int squart(int n, int x)
{
	if (x * x > n)
		return (-1);
	else if (x * x == n)
		return (x);
	return (squart(n, x + 1));
}

/**
 * _sqrt_recursion - prints out the square root of a number
 * @n: integer argument
 * Return: -1 if no natural square root, square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (squart(n,0));
}

