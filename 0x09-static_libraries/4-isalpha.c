#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: integer values that will be checked if it is the decimal ASCII
 * equivalent of lower and upper case letters.
 *
 * Return: 1 if alphabet and 0 other wise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
