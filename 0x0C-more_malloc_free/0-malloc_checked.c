#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes
 * Return: Address to the alocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
