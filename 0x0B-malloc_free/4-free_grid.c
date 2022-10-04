#include <stdlib.h>

/**
* free_grid - Free memory in array
* @grid: 2D array
* @height: ...
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
