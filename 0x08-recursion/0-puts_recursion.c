#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: Pointer to a string
 */
void _puts_recursion(char *s)
{
	char *p = s;
	_putchar(*p);
	if (*p == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(++p);
}
