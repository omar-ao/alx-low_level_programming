#include "main.h"
/**
 * _realloc - Reallocates a memory block for malloc and free
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes of the new memory block
 * Return: Pointer to new memory block if succeeds otherwise NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	char *p;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	p = malloc(new_size);
	if (!p)
		return (NULL);
	if (new_size < old_size)
		for (i = 0; i < (int) new_size; i++)
			p[i] = 0;
	free(ptr);
	return ((void *) p);
}
