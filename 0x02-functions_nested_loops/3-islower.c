#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * Return: 0 if lowercase found or 1 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
