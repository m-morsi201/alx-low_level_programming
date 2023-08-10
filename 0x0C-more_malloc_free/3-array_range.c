#include "main.h"

/**
 * array_range -  function that creates an array of integers.
 * @min: it is minmum.
 * @max: it is maximum.
 * Return: NULL or *m.
*/

int *array_range(int min, int max)
{
	int *m;
	int r, t;

	t = 0;

	if (min > max)
	{
		return (NULL);
	}
	m = malloc(((max - min) + 1) * sizeof(*m));
	if (m == NULL)
	{
		return (NULL);
	}
	for (r = min; r <= max; r++)
	{
		m[t] = r;
		t++;
	}
	return (m);
}
