#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints a character to the standard output
 * Return: nothing
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

