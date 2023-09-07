#include "main.h"
/**
 * get_num_bits - Returns the number of bits of a decimal number
 * @n: Decimal number
 * Return: Number of bits
 */
unsigned int get_num_bits(unsigned long int n)
{
	int count = 0;

	while (n > 1)
	{
		count++;
		n >>= 1;
	}
	return (count);
}
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Decimal number
 * @index: Index
 * Return: -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = get_num_bits(n);

	if (index > bits)
		return (-1);
	return ((n & (1 << index)) >> index);
}
