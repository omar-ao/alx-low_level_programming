#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: String to be copied
 * Return: A pointer
 */
char *_strdup(char *str)
{
	int i, len;
	char *dup;

	len = strlen(str);
	dup = malloc(len + 1);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}
