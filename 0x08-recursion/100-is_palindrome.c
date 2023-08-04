#include "main.h"

/**
 * is_palindrome - Finds if a function is palindrome
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	return ((len) ? _palindrome(s, (s + len - 1)) : 1);
}

/**
 * _palindrome - helper function
 * @start: Pointer to the first character
 * @end: Pointer to last character
 * Return: 1 if string is palindrome or 0 if not
 */
int _palindrome(char *start, char *end)
{
	if (*start != *end)
		return (0);
	if (start >= end)
		return (1);
	return (_palindrome(++start, --end));
}
