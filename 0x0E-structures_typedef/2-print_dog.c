#include "dog.h"
#include <stdio.h>

/**
 * print_dog - this is print the dog
 * @d: this is the dog to print
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
