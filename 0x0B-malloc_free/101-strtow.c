#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts the number of words
 * @s: string to be checked
 * Return: the number of words in the string
 */


int word_count(char *s)
{
	int x = 0, y = 0, words = 0;

	while (s[x] != '\0')
	{
		if (y == 0)
		{
			y = 1;
			words++;
		}

		else if (s[x] == ' ')
		{
			y = 0;
		}

		x++;
	}

	return (words);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	char **two_arr, *yet;
	int x = 0, y = 0, z = 0, len = 0, words, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0 || str[words] == ' ')
		return (NULL);

	two_arr = (char **) malloc(sizeof(char *) * (words + 1));
	if (two_arr == NULL)
		return (NULL);

	while (x <= len)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (z)
			{
				end = x;
				yet = (char *) malloc(sizeof(char) * (z + 1));
				if (yet == NULL)
					return (NULL);
				while (start < end)
					*yet++ = str[start++];
				*yet = '\0';
				two_arr[y] = yet - z;
				y++;
				z = 0;
			}
		}
		else if (z++ == 0)
			start = x;
	x++;
	}

	two_arr[y] = NULL;

	return (two_arr);
}

