#include "main.h"
/**
 * _isalpha - checks whether a character is an aplhabet or not
 * @c: character parameter
 * Return: 1 if aplababet or 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}

