#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 *
 * @n: Pointer to unsigned long int
 * @index: Is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 7))
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
