#include "main.h"

/**
 * get_ascii - Gets the ascii value of the character
 * @c: character
 * Return: Int
 */
int get_ascii(char c)
{
	int lower, upper;

	lower = ('a' * (c >= 'a' && c <= 'z'));
	upper = ('A' * (c >= 'A' && c <= 'Z'));

	return (lower + upper);
}
/**
 * rot13 - Encodes a string using rot13
 * @s: String
 * Return: @s
 */
char *rot13(char *s)
{
	int i, rot, ascii, len;

	for (i = 0, len = strlen(s); i <= len; i++)
	{
		ascii = get_ascii(s[i]);
		if (ascii)
		{
			rot = (s[i] - ascii) + 13;
			rot = (rot % 26);
			s[i] = (rot + ascii);
		}
	}
	return (s);
}
