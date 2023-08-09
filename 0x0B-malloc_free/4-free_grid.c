#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid.
 * @grid: it is the grid.
 * @height: it is the height.
*/

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[M]);
	}
	free(grid);
}
