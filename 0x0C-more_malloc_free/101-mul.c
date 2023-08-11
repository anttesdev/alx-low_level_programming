#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - check for a non digit char
 * @s: string to be checked
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int _is_digit(char *s)
{
	int x;

	for (x = 0; (s[x]); x++)
	{
		if (s[x] < 48 || s[x] > 57)
			return (0);
	}
	return (1);
}


/**
 * _strlen - length of a string
 * @s: string to be checked
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0';)
	{
		x++;
	}
	return (x);
}

/**
 * error - prints out an error
 */
void error(void)

	{	printf("Error\n");
		exit(98);
	}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *ns1, *ns2;
	int len1, len2, sum_len, num1, num2, *size, x, y = 0, var;

	ns1 = argv[1], ns2 = argv[2];
	if (argc != 3 || !_is_digit(ns1) || !_is_digit(ns2))
		error();
	len1 = _strlen(ns1);
	len2 = _strlen(ns2);
	sum_len = len1 + len2 + 1;
	size = malloc(sizeof(int) * sum_len);
	if (!size)
		return (1);
	for (x = 0; x <= len1 + len2; x++)
		size[x] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = ns1[len1] - '0';
		var = 0;
		for (len2 = _strlen(ns2) - 1; len2 >= 0; len2--)
		{
			num2 = ns2[len2] - '0';
			var += size[len1 + len2 + 1] + (num1 * num2);
			size[len1 + len2 + 1] = var % 10;
			var /= 10;
		}
		if (var > 0)
			size[len1 + len2 + 1] += var;
	}
	for (x = 0; x < sum_len - 1; x++)
	{
		if (size[x])
			y = 1;
		if (y)
			_putchar(size[x] + '0');
	}
	if (!y)
		_putchar('0');
	_putchar('\n');
	free(size);
	return (0);
}

