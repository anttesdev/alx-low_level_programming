#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts second number from the first
 * @a: first number
 * @b: second number
 * Return: difference bewteen a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: product for the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides the first number by the second
 * @a: first number
 * @b: second number
 * Return: quotient for the two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - the remainder of two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder of the fist number divided by the second
 */

int op_mod(int a, int b)
{
	return (a % b);
}
