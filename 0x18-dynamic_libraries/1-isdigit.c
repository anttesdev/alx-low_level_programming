#include "main.h"

/**
 * _isdigit - a function that checks whether a charachter is a digit or not
 * @c: charachter argument for function
 * Return: (1) if digit, (0) if not
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);

	return (0);
}
