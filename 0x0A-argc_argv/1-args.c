#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0 is a success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
