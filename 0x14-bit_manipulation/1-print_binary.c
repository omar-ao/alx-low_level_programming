#include "main.h"

/**
 * print_binary - Prints the binary reprepsentation of a number
 * @n: Unigned int
 */
void print_binary(unsigned long int n)
{
	int r;

	if (n > 1)
		print_binary(n >> 1);
	r = n & 1;
	printf("%d", r);
}
