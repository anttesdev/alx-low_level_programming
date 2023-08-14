#include <stdio.h>

/**
 * main - prints out the name of the file it was compiled from
 * Return: 0 is sucess
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
