#include "main.h"

/**
 * flip_bits - Finds the number of bits needed to be flipped
 *
 * @n: Number from
 * @m: Number to
 * Return: The number of bits you would need to flip to get from one
 * number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits = 0;
	unsigned long int k = n ^ m;

	while (k)
	{
		nbits++;
		k &= k - 1;
	}
	return (nbits);
}
