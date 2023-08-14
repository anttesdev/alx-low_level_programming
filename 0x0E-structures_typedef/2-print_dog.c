#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: value to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("name: %s\nage: %f\nowner: %s\n", d->name, d->age, d->owner);
	}

