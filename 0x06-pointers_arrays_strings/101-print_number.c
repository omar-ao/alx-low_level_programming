#include "main.h"

/**
 * print_number - Prints an integer
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int k;

	k = n;
	if (n < 0)
	{
		k = -k;
		_putchar('-');
	}
	if (k / 10)
		print_number(k / 10);
	_putchar((k % 10) + '0');
}
