#include "main.h"

/**
 * print_binary - Prints the binary reprepsentation of a number
 * @n: Unigned int
 */
void print_binary(unsigned long int n)
{
	int i, bits;

	if (n == 0)
	{
		printf("0");
		return;
	}
	bits = get_bits(n);
	for (i = 1 << (bits - 1); i > 0; i >>= 1)
		(n & i) ? printf("1") : printf("0");
}
/**
 * get_bits - Gets the number of bits in an unsigned int
 * @n: Unisigned int
 * Return: Number of bits
 */
int get_bits(unsigned long int n)
{
	int bits = 0;

	while (n)
	{
		bits++;
		n >>= 1;
	}
	return (bits);
}
