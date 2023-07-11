#include "main.h"

/**
 * **alloc_grid - function that returns a 2 dimensional array of integers.
 * @width: it is int.
 * @height: it is int.
 * Return: two array.
*/

int **alloc_grid(int width, int height)
{
	int **T, m, r;

	T = malloc(sizeof(*T) * height);

	if (width <= 0 || height <= 0 || T == 0)
	{
		return (NULL);
	}
	else
	{
		for (m = 0; m < height; m++)
		{
			T[m] = malloc(sizeof(**T) * width);
			if (T[m] == 0)
			{
				while (m--)
					free(T[m]);
				free(T);
				return (NULL);
			}

			for (r = 0; r < width; r++)
				T[m][r] = 0;
		}
	}

	return (T);
}
