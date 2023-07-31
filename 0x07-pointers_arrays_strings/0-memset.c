#include "main.h"

/**
 * _memset - Fills memory with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: Number of @b
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*s++ = b;
	return (s);
}
