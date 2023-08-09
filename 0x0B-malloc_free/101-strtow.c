#include <stdlib.h>
#include "main.h"

/**
 * word_count - count the number of words in a string
 * @s: string to  check
 * Return: number of words
 */
int word_count(char *s)
{
	int x = 0 , y = 0, words;

	while (s[y] != '\0')
	{
		if (s[y] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			words++;
		}
	
		y++;
	}

	return (words);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to a multidimensional array or NULL
 */

char **strtow(char *str)
{
	char **two_d_array, *yet;
	int x = 0, y = 0, z = 0, len = 0, words, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);

	two_d_array = (char **) malloc(sizeof(char *) * (words + 1));
	if (two_d_array == NULL)
		return (NULL);

	while ( x <= len)
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
				two_d_array[y] = yet - z;
				y++;
				z = 0;
			}
		}
		else if (z++ == 0)
			start = x;
		x++;
	}

	two_d_array[y] = NULL;

	return (two_d_array);

}

