#include "main.h"
#include <stdio.h>


/**
 * main - prints a program's name
 * @argc: number of parameters(arguments)
 * @argv: array of arguments
 * Return: 0 is a success
 */


int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
