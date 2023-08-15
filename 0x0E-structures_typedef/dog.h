#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - it is a dog info.
 * @name: it is a dog's name.
 * @owner: it is the owner's name.
 * @age: it is the dog's age.
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
