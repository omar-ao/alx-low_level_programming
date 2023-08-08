#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: Size of the array
 * @c: special character
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size == 0)
		return (NULL);
	s = malloc(size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (int)size; i++)
		s[i] = c;
	return (s);
}
