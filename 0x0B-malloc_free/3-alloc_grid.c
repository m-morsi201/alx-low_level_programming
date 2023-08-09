#include "main.h"

/**
 * *alloc_grid -  function that returns a pointer to array of integers.
 * @width: it is the width of dimensional.
 * @height: it is the height of dimensional.
 * Return: null if width or height is 0 or negative.
*/

int **alloc_grid(int width, int height)
{
	int **g;
	int m, r;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = malloc(height * sizeof(*g));
	if (g == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		g[m] = malloc(width * sizeof(**g));
		if (g[m] == NULL)
		{
			for (m--; m > 0; m--)
				free(g[m]);
			free(g);
			return (NULL);
		}
		for (r = 0; r < width; r++)
			g[m][r] = 0;
	}
	return (G);
}
