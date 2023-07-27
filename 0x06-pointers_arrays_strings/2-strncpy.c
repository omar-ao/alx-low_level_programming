#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: destinaton
 * @src: source
 * @n: number of strings to copy from @src
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	len = strlen(src);
	n = (len < n) ? len : n;

	for (i = 0; i <= n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
