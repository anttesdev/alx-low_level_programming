#include "main.h"

/**
 * rot13 - a function that converts a string to rot 13 encoding
 * @p: pointer parameter
 * Return: encoded string
 */

char *rot13(char *p)
{
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char Rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int x;

	x = 0;

	while (p[x] != '\0')
	{
		int y = 0;

		while (y < 52)
		{
			if (p[x] == alph[y])
			{
				p[x] = Rot13[y];
				break;
			}

			y++;
		}

		x++;
	}
	return (p);
}
