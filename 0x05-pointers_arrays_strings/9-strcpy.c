#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: char pointer
 * @src: char pointer
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (i = 0, n = strlen(src); i < n; i++)
		dest[i] = src[i];
	return (dest);
}
