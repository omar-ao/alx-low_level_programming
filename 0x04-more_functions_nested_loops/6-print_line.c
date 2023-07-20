#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character  _ should be printed
 */
void print_line(int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
