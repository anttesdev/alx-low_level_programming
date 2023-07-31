#include "main.h"
/**
 * print_chessboard - function that prints a chess board
 * @a: array input
 * Return: 0 is a sucess
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}

