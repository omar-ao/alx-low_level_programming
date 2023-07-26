#include "main.h"

/**
 * puts2 - prints every other character of a string with the first character
 * @str: string
 */
void puts2(char *str)
{
	char *tmp = str;

	while (*str != '\0')
	{
		write(1, tmp, 1);
		tmp += 2;
		str++;
	}
	_putchar('\n');
}
