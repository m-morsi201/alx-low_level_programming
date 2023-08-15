#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
