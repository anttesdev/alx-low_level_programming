#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void lotto(bool firstTime)
{
	int Numbers[] = {9, 8, 10, 24, 75, 9};
	int i;

	if (firstTime)
	{
		for (i = 0; i < sizeof(Numbers)/sizeof(Numbers[0]); i++)
		{
			printf("%d ", Numbers[i]);
		}
	}
	else
	{
		for (int i = 0; i < 5; ++i)
		{
			printf("%d ", rand() % 75 + 1);
		}
		printf("%d\n", rand() % 15 + 1);
	}
}

