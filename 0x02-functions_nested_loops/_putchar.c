#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints a character to the standard output
 * Return: nothing
 */
void _putchar(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	write(1, str, i);
}

