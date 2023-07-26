#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k, srclen, destlen, len;
	char *result = "";

	destlen = strlen(dest);
	srclen = strlen(src);
	len = destlen + srclen + 1;

	printf("%d, %d, %d\n", destlen, srclen, len);
	for (i = 0; i <= len; i++)
	{
		for (j = 0; j < destlen; j++)
			*(result + i) = *(dest + j);
		*(result + i) = ' ';
		i
		for (k = 0; k <= srclen; k++)
			*(result + i) = *(src + k);
	}
	return (result);
}
