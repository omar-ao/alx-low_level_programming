#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: integer local variable of this function
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = n * -1;
		last = n % 10;
		_putchar(last + '0');
	}
	else
	{
		last = n % 10;
		_putchar(last + '0');
	}
	return (last);
}
