#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	for ( ; *s != '\0'; s++)
		;

	i = 0;
	while (i > 0)
	{
		write(1, s - i, 1);
		i++;
	}
	_putchar('\n');
}
