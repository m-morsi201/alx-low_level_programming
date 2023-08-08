#include "main.h"

/**
 * *create_array - function that creates an array of chars & initializes it.
 * @size: it is a size of array.
 * @c: it is a char.
 * Return: 0 if size or m = 0, m if not.
*/

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int r;

	m = malloc(size * sizeof(char));

	if (size == 0 || m == 0)
	{
		return (NULL);
	}
	for (r = 0; r < size; r++)
	{
		m[r] = c;
	}
	return (m);
}
