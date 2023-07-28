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

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	if (len < n)
		*(dest + i) = '\0';
	return (dest);
}
