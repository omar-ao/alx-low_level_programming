#include "main.h"

/**
 * _memcpy - Copies memory area
 * @src: source memory area
 * @dest: destination memory area
 * @n: number of bytes to be copied
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		*(dest++) = *(src++);
	return (dest);
}
