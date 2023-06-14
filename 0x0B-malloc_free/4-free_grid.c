#include "main.h"

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 *
 * @grid: the 2D grid to free
 * @height: the height of the grid
 *
 * This function frees the memory allocated by the alloc_grid function.
 * It first frees each row of the grid, and then frees the grid itself.
 */

void free_grid(int **grid, int height)
{
	int i;

	/* Free each row of the grid */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/* Free the grid itself */
	free(grid);
}
