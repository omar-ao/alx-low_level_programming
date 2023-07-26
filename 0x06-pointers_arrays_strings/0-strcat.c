#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k, destlen, srclen;
	char *result;

	destlen = strlen(dest);
	srclen = strlen(src);
	result = dest;

	for (j = 0, i = 0; j < destlen; j++, i++)
		*(result + i) = *(dest + j);
	for (k = 0; k <= srclen; k++, i++)
		*(result + i) = *(src + k);
	return (result);
}
