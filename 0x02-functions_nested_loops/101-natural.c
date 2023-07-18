#include <stdio.h>
/**
  * main - entry point
  * Description: a function that sums up 5 multiples and 3 multtiples
  * Return: 0 is a sucess
  */

int main(void)
{
	int x;

	int sum = 0;

	for (x = 0; x < 1024; x++)
	{
	if ((x % 3) == 0 || (x % 5) == 0)

		sum += x;
	}

	printf("%d\n", sum);

	return (0);
}


