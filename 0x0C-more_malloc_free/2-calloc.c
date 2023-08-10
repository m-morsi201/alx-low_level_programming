#include "main.h"

/**
 * *_calloc - function that allocates memory for an array, using malloc.
 * @nmemb: it is number of elem.
 * @size: it is the size of memory.
 * Return: NULL or *m.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int r;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m != NULL)
	{
		for (r = 0; r < (nmemb * size); r++)
		{
			m[r] = 0;
		}
		return (m);
	}
	return (NULL);
}
