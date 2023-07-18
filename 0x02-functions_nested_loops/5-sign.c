#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: an integer value
 * Return: 1 if n is positive, 0 if n is zero and -1 if n is negative
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else
	{
		_putchar('0');
		result = 0;
	}
	return (result);
}
