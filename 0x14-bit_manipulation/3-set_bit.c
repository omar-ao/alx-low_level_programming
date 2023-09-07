#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to an int
 * @index: Index at which the value would be set to 1
 * Return: -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (0);
}
