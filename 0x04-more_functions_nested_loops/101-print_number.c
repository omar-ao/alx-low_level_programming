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
		n *= -1;
		k = n;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
		print_number(k);
	_putchar((n % 10) + '0');
}
