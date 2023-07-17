#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is a dog struct
 * @name: is a dog name
 * @age: is a dog age
 * @owner: is a owner name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
