#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: parameter of string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; length++)
	{
		s++;
	}

	return (length);

}

/**
 * *_strcpy - function that copies a string pointed to by src
 * @dest : to be copied to
 * @src: copied from
 * Return: string that is copied form src
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}

	while (y < x)
	{
		dest[y] = src[y];
		y++;
	}

	dest[x] = '\0';

	return (dest);
}



/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenN, lenO;

	lenN = _strlen(name);
	lenO = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lenN + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lenO + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

