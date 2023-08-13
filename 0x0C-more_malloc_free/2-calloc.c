#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements of the array
 * @size: Size of each element
 * Return: Pointer to the allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, j;
	char **p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(void **) * nmemb);
	if (!p)
		return (NULL);
	for (i = 0; i < (int) nmemb; i++)
	{
		p[i] = malloc(size);
		if (!p[i])
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
		}
		for (j = 0; j < (int) size; j++)
			p[i][j] = 0;
	}
	return ((void **) p);
}
