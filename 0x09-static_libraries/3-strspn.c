#include "main.h"

/**
 * _strspn - Gets the length of prefix substring
 * @s: string
 * @accept: Prefix substring
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, occurance, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		occurance = 0;
		for (j = 0; accept[j] != '\0'; j++)
			occurance += (s[i] == accept[j]) ? 1 : 0;
		if (occurance)
			len += occurance;
		else
			break;
	}
	return (len);
}
