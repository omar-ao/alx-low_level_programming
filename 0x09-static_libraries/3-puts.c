#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 */
void _puts(char *str)
{
	for ( ; *str != '\0'; str++)
		write(1, str, 1);
	_putchar('\n');
}
