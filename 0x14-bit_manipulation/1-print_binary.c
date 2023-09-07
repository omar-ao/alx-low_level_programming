#include "main.h"

/**
 * print_binary - Prints the binary reprepsentation of a number
 * @n: Unigned int
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
