#include "main.h"

/**
 * cap_string - Capitalises all words in strings
 * @s: String containg words
 * Return: @s
 */
char *cap_string(char *s)
{
	int i, len, n;

	len = strlen(s);
	s[0] = (s[0] >= 'a' && s[0] <= 'z') ? s[0] - 32 : s[0];
	for (i = 0; i <= len; i++)
	{
		n = i + 1;
		if (is_sep(s[i]) && n != len)
			s[n] = (s[n] >= 'a' && s[n] <= 'z') ? s[n] - 32 : s[n];
	}
	return (s);
}
/**
 * is_sep - Checks if character is word separator
 * @c: character
 * Return: 1 if separator found otherwise 0
 */
int is_sep(char c)
{
	int n, k, m;

	n = (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' || c == '.');
	k = (c == '!' || c == '?' || c ==  '"' || c == '(' || c == ')' || c ==  '{');
	m = (c == '}');
	return (n + k + m);
}
