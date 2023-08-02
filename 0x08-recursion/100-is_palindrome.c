#include "main.h"



/**
 * len - a function that returns the length of a string
 * @s: string to calculate the length of *
 * Return: length of the string
 */

int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}



/**
 * pal - recursive checking function for palindrome
 * @s: string argument
 * @x: x argument for iteration
 * @y: string length
 * Return: 1 if palindrome, 0 if not
 */
int pal(char *s, int x, int y)
{
	if (*(s + x) != *(s + y - 1))
		return (0);
	if (x >= y)
		return (1);
	return (pal(s, x + 1, y - 1));
}


/**
 * is_palindrome - checks whether a string is a palindrome or not
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal(s, 0, len(s)));
}



