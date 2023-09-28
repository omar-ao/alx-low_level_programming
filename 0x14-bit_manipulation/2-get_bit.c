#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 *
 * @n: Number
 * @index: Index of the bit
 * Return: The value of the bit at index @index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & (1 << index)) != 0);
}
