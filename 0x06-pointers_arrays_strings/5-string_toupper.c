#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @s: String
 * Return: @s
 */
char *string_toupper(char *s)
{
	int len;

	len = strlen(s);
	for (i = 0; i < len; i++)
		s[i] = (s[i] >= 'a' && s[i] <= 'z') ? s[i] + 32 : s[i];
	return (s);
}
