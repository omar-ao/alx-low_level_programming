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
	int i;

	for (i = 0;src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
