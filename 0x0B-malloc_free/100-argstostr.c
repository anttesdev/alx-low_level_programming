#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates command line arguments
 * @ac: number of arguments
 * @av: array of arguments
 * Return: strings of arguments followed by a new line
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0, j = 0, k = 0, l = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			k++;
			j++;
		}
	}

		s = malloc((sizeof(char) * (k + ac )) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[l] = av[i][j];
			l++;
		}
		if (s[l] == '\0')
			s[l++] = '\n';
	}
		return (s);

}
