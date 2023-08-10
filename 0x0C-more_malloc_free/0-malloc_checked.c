#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: it is the size of memory.
 * Return: mem .
*/

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
