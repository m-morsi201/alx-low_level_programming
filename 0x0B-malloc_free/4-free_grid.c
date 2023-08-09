#include "main.h"

/***/

void free_grid(int **grid, int height)
{
	int M;

	for (M = 0; M < height; M++)
	{
		free(grid[M]);
	}
	free(grid);
}
