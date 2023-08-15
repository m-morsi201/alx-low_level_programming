#include "dog.h"

/**
 * free_dog - free malloc.
 * @d: it is a pointer to free.
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
