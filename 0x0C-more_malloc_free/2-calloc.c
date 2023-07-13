#include "main.h"

/**
 * memset - it is file memory.
 * @c: it is pointer.
 * @d: it is contant.
 * @m: it is max bytes.
 * Return: p.
*/

char memset(char c, char d, unsigned int m)
{
	char *p = c;

	while (m--)
		*c++ = d;

	return (p);
}

/**
 * *_calloc - function that allocates memory for an array, using malloc.
 * @nmemb: array.
 * @size: it is size.
 * Return: r.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *r;

	if (size == 0 || nmemb == 0)
		return (NULL);
	r = malloc(sizeof(int) * nmemb);

	if (r == 0)
		return (NULL);

	memset(r, 0, sizeof(int) * nmemb);

	return (r);
}
