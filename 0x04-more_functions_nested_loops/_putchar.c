#include <unistd.h>

/**
 * _putchar - Prints a character to the standard ouput
 */
void _putchar(int c)
{
	write(1, &c, 1);
}
