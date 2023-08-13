#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements of the array
 * @size: Size of each element
 * Return: Pointer to the allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, n;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = size * nmemb;
	p = malloc(n);
	if (!p)
		return (NULL);
	for (i = 0; i < n; i++)
		p[i] = 0;
	return ((void *) p);
}
