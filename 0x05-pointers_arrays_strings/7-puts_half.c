#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string
 */
void puts_half(char *str)
{
	int i, len, n;

	len = strlen(str);

	n = (len % 2 == 0) ? (len / 2) : ((len - 1) / 2) + 1;

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
