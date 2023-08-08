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

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}
