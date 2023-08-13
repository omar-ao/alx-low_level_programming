#include "main.h"
/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of s2 bytes
 * Return: Pointer to the newly allocated memory otherwise Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len, m;
	char *s;

	s1 = !s1 ? "" : s1;
	s2 = !s2 ? "" : s2;
	m = strlen(s2);
	n = (n >= m) ? m : n;
	len = strlen(s1) + n;
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[i] = s1[i];
	for (j = 0; j < n; i++, j++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
