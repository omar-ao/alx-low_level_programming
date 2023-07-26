#include "main.h"

/**
 * puts2 - prints every other character of a string with the first character
 * @str: string
 */
void puts2(char *str)
{
	int i;
	char *strcpy = str;

	for (i = 0; *str != '\0'; str++, i++)
	{
		if (i % 2 == 0)
			_putchar(strcpy[i]);
	}
	_putchar('\n');
}
