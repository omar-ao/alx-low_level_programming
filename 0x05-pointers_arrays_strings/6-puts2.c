#include "main.h"

/**
 * puts2 - prints every other character of a string with the first character
 * @str: string
 */
void puts2(char *str)
{
	for ( ; *str != '\0'; str += 2)
		write(1, str, 1);
	_putchar('\n');
}
