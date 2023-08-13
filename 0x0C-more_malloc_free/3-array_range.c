#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Minimum int
 * @max: Maximum int
 * Return: Pointer to array if succeeds otherwise null
 */
int *array_range(int min, int max)
{
	int i, n;
	int *p;

	if (min > max)
		return (NULL);
	n = max - min;
	p = malloc(sizeof(int) * n);
	if (!p)
		return (NULL);
	for (i = 0; i < n; i++)
		p[i] = min++;
	return (p);
}
