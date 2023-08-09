#include "main.h"

/**
 * *alloc_grid -  function that returns a pointer to array of integers.
 * @width: it is the width of dimensional.
 * @height: it is the height of dimensional.
 * Return: null if width or height is 0 or negative.
*/

int **alloc_grid(int width, int height)
{
	int **G;
	int m, r;

	if (width <= 0 || height <= 0)
		return (NULL);
	G = malloc(height * sizeof(*G));
	if (G == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		G[m] = malloc(width * sizeof(**G));
		if (G[m] == NULL)
		{
			for (m--; m > 0; m--)
				free(G[m]);
			free(G);
			return (NULL);
		}
		for (r = 0; r < width; r++)
			G[m][r] = 0;
	}
	return (G);
}
