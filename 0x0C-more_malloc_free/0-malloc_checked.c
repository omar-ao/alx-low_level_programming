#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes
 * Return: Address to the alocated memory
 */
void *malloc_checked(unsigned int b)
{
	return ((malloc(b) == NULL) ? NULL : malloc(b));
}
