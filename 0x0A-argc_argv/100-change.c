#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints change of coins for money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, change;
	int x;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	change = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}


	for (x = 0; x < 5 && num >= 0; x++)
	{
		while (num >= coins[x])
		{
			change++;
			num = num - coins[x];
		}
	}

	printf("%d\n", change);
	return (0);
}

