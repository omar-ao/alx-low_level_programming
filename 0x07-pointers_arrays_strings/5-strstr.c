#include "main.h"

/**
 * _strstr - Locates substring
 * @haystack: String to be searched
 * @needle: Substring to be located
 * Return: Pointer to start of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, found = 0;
	char *r;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++, k++)
			if (haystack[i] != needle[j])
				break;
		if (k == (int) strlen(needle))
		{
			r = (haystack + i);
			found = 1;
			break;
		}
	}
	if (found)
		return (r);
	else
		return (NULL);
}
