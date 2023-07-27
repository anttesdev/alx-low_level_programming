#include "main.h"

/**
 * cap_string - changes all uppercase elements of string to lowercase
 * @p: pointer input
 * Return: lowercase string p
 */

char *cap_string(char *p)
{
	int i;

	i = 0;

	while (p[i])
	{
	while (!(p[i] >= 97 && p[i] <= 122))
	{
		i++;
	}
		if
		(p[i - 1] == ' ' ||
		p[i - 1] == '\t' ||
		p[i - 1] == '\n' ||
		p[i - 1] == ',' ||
		p[i - 1] == ';' ||
		p[i - 1] == '.' ||
		p[i - 1] == '!' ||
		p[i - 1] == '?' ||
		p[i - 1] == '"' ||
		p[i - 1] == '(' ||
		p[i - 1] == ')' ||
		p[i - 1] == '}' ||
		p[i - 1] == '{' ||
		i == 0)

			{
				p[i] = p[i] - 32;
			}

		i++;
	}

	return (p);
}
