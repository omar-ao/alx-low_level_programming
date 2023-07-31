#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * @s: string
 * @accept: string
 * Return: Pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, occurance = 0;
	char *r;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				occurance = 1;
		if (occurance)
		{
			r = (s + i);
			break;
		}
	}
	if (occurance)
		return (r);
	else
		return (NULL);
}
