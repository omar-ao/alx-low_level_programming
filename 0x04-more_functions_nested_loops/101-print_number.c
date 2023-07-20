#include "main.h"

/**
 * print_number - Prints an integer
 * @n: number to be printed
 */
void print_number(int n)
{
	int i, digits, tmp, divisor;

	digits = 0, tmp = n;

	do {
		digits++;
		tmp = tmp / 10;
	} while (tmp != 0);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	divisor = 1;

	for (i = 1; i < digits; i++)
		divisor = divisor * 10;

	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		n = n % divisor;
		divisor = divisor / 10;
	}
}
