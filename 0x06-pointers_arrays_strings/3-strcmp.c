#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Difference of the strings
 */
int _strcmp(char *s1, char *s2)
{
	int i, len, diff;

	for (i = 0, len = strlen(s1); i < len; i++)
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			break;
	}
	return (diff);
}
