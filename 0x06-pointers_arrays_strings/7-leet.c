#include "main.h"
/**
 * is_aeotl - Checks for the letters named after it
 * @c: Letter to be checked
 * Return: Ascii of the codes
 */
int is_aeotl(char c)
{
	int a, e, o, t, l, result;

	a = ('4' * (c == 'A' || c == 'a'));
	e = ('3' * (c == 'E' || c == 'e'));
	o = ('0' * (c == 'O' || c == 'o'));
	t = ('7' * (c == 'T' || c == 't'));
	l = ('1' * (c == 'L' || c == 'l'));
	result = a + e + o + t + l;
	return (result);
}
/**
 * leet - Encode string into 1337
 * @s: String
 * Return: @s
 */
char *leet(char *s)
{
	int i, code;

	for (i = 0; s[i] != '\0'; i++)
	{
		code = is_aeotl(s[i]);
		if (code)
			s[i] = code;
	}
	s[i] = '\0';
	return (s);
}
