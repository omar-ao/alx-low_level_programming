#include "main.h"
/**
 * alloc_grid - Returns a pointer to dimensional array
 * @width: Rows
 * @height: Column
 * Return: Pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (free_matrix(grid, i));
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
/**
 * free_matrix - Frees allocated memory
 * @grid: 2d array
 * @n: Height of the array
 * Return: NULL
 */
int **free_matrix(int **grid, int n)
{
	int i;

	for (i = 0; i < n; i++)
		free(grid[i]);
	free(grid);
	return (NULL);
}
