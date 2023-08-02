#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: String
 * @c: character to locate.
 * Return: first occurance of @c if found otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}
