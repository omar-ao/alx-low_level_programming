#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
