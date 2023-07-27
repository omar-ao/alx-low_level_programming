#include "main.h"

/**
 * strncpy - Copies a string
 * @dest: destinaton
 * @src: source
 * @n: number of strings to copy from @src
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	len = strlen(src);
	len = (n < len) ? n : len;

	for (i = 0; i < len; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
