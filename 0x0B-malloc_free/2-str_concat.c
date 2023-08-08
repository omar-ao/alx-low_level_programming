#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Concatenated string if success otherwise null
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len, n, m, i, j;

	if (s2 == NULL)
		s2 = "";
	n = strlen(s1);
	m = strlen(s2);
	len = n + m;
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		s[i] = s1[i];
	for (j = 0; j < m; j++, i++)
		s[i] = s2[j];
	return (s);
}
