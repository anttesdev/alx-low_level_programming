#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * num_check - check string if there is any digits
 * @s: array string
 * Return: Always 0 (Success)
 */
int num_check(char *s)
{
	unsigned int count;

	for (count = 0; count < strlen(s); count++)

	{
		if (!isdigit(s[count]))
		{
			return (0);
		}

	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 is success
 */

int main(int argc, char *argv[])

{

	int count;
	int string_to_integer;
	int sum = 0;

	for (count = 1; count < argc; count++)
	{
		if (num_check(argv[count]))

		{
			string_to_integer = atoi(argv[count]);
			sum = sum + string_to_integer;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

	}

	printf("%d\n", sum);

	return (0);
}

