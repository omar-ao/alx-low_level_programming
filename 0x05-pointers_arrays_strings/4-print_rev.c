#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
