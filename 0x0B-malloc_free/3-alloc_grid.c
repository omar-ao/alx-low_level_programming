#include "main.h"
/**
 * alloc_grid - Returns a pointer to dimensional array
 * @width: Rows
 * @height: Column
 * Return: Pointer
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		grid[i] = calloc(height, sizeof(int));
		if (grid[i] == NULL)
			return (free_grid(grid, i));
	}
	return (grid);
}
/**
 * free_grid - Frees allocated memory
 * @grid: 2d array
 * @n: Height of the array
 * Return: NULL
 */
int **free_grid(int **grid, int n)
{
	int i;

	for (i = 0; i < n; i++)
		free(grid[i]);
	free(grid);
	return (NULL);
}
