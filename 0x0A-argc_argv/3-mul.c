#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer converted from a string
 */
int _atoi(char *s)
{
	int x, d, n, len, f, digit;

	x = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++d;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}

	if (f == 0)
		return (0);

	return (n);
}



/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments that are arrays
 * Return: 0 is a Success, 1 is Error
 */
int main(int argc, char *argv[])
{
	int multiplication, number1, number2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = _atoi(argv[1]);
	number2 = _atoi(argv[2]);
	multiplication = number1 * number2;

	printf("%d\n", multiplication);

	return (0);
}

