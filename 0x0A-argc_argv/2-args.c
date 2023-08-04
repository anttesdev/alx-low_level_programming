#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: arguments that are array
 * Return: 0 is a success
 */

int main(int argc, char *argv[])
{
	int x;

	x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
