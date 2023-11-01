#include <stdlib.h>

/**
 * free_grid - function frees 2 dimensional grid previously created
 * @grid: function to be freed
 * @height: height of the grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid  == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
