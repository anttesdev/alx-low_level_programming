#include "main.h"

/**
 * leet - encodes a string in to 1337
 * @p: ponter argument
 * Return: manipulated leet code string
 */

char *leet(char *p)
{
	int x = 0;

	char S1[] = "aAeEoOtTlL";
	char S2[] = "4433007711";

	while (p[x] != '\0')
	{
		int y = 0;

		while (y < 10)
		{
			if (p[x] == S1[y])
			{
				p[x] = S2[y];
			}

			y++;
		}

		x++;
	}

	return (p);
}
