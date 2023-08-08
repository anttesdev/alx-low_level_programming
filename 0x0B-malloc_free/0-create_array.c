#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates and array and initalizes it with a char c
 * @size: size of the array
 * @c: the first charachter of the array
 * Return: a pointer to the array
 */


char *create_array(unsigned int size, char c)
{
	unsigned int x;
	
	char *s;

	s = malloc(sizeof(char) * size);


	if (size == 0 || s == NULL)
		return (0);

	else if(size > 0)
	{
		for (x = 0; x < size; x++)
		{
			s[x] = c;
		}
	}
	return (s);
}


