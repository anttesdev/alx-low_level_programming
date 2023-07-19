#include "main.h"

/**
 * Positive_or_negative - Entry point of this function to check for values
 * Description:it returns whether a value is positive, negative or zero
 * @i: integer parameter for the function
 * Return: 0 is success
 */

void positive_or_negative(int i)
{
	if (i > 0)

{	printf("%d is positive\n", i);

}
	else if (i == 0)

{	printf("%d is zero\n", i);

}

	else

{	printf("%d is negative\n", i);

}
}
