#include "main.h"

/**
 * _strncat - Concatenates two strings
 * Description: It's similar to the _strcat function except that it
 * will use at most n bytes from src and src does not need
 * to be null-terminated if it contains n or more bytes
 * @dest: destination
 * @src: source
 * @n: number of bytes to concatenate
 * Return: Pointer of the concatenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = strlen(dest), srclen = strlen(src);

	n = (n > len) ? len : n;
	for (i = 0; i < n; i++)
		*(dest + len + i) = *(src + i);
	if (!(srclen >= n))
		*(dest + len + i) = '\0';
	return (dest);
}
