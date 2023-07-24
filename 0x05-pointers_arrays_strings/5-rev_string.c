#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string parameter
 */

void rev_string(char *s)
{
	char back = s[0];
	int length = 0;
	int i;

	while (s[length != '\0'])
		length++;

	for (i = 0; i < length; i++)
	{
		length--;
		back = s[i];
		s[i] = length;
		s[length] = back;
	}
}



