#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type.
 * @d: it is a pointer.
 * @name: it is the name.
 * @owner: it is a owner's name.
 * @age: it is a dog's age.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
	d = malloc(sizeof(struct dog));
}
