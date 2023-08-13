#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes
 * Return: Address to the alocated memory
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);
	return (malloc(b));
}
