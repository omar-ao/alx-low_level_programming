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
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
