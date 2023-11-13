#include "main.h"

/**
 * _islower - returns uppercase or lowercase
 * @c: pararmeter input for c
 * Return: 0 Uppercase or 1 lowercase
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);

}
