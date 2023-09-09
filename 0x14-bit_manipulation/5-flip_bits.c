#include "main.h"

/**
 * flip_bits - Finds the number of bits you would need to flip to get from
 * one number to another
 * @n: First number
 * @m: Second number
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k = n ^ m, count = 0;

	while (k)
	{
		count++;
		k = k & (k - 1);
	}
	return (count);
}
