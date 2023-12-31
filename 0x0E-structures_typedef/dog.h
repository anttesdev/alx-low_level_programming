#ifndef DOG_H
#define DOG_H


/**
 * struct dog - structure for basic info of a doog
 * @name: first member of struct
 * @age: second member of struct
 * @owner: third member of struct
 * Description: shows basic info about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);


#endif

