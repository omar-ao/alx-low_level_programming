#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid created by alloc_grid
 * @grid: 2d array
 * @height: Height of the array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
