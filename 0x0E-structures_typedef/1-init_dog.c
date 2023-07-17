#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: this is the dog to init
 * @name: this is a dog name
 * @age: this is a dog age
 * @owner: this is a owner nam
 *
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
