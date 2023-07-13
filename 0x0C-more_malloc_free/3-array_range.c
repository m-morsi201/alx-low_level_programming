#include "main.h"

/**
 * *array_range - function that creates an array of integers.
 * @min: it is string.
 * @max: it is int.
 * Return: int.
*/

int *array_range(int min, int max)
{
	int l, r;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (!p)
		return (NULL);
	for (r = 0; r < l; r++)
		p[r] = min++;
	return (p);
}
