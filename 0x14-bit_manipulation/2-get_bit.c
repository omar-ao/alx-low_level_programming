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
	if (index > bit_len(n))
		return (-1);
	return ((n & (1 << index)) != 0);
}

/**
 * bit_len - Gets the number of bits
 *
 * @n: Number
 * Return: Number of bits in n
 */
unsigned int bit_len(unsigned long int n)
{
	int len = 0;

	while (n)
	{
		len++;
		n >>= 1;
	}
	return (len);
}
