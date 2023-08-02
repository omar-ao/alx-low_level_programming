#include "main.h"

/**
 * compare - Compares two strings
 * @haystack: String
 * @needle: String
 * Return: 1 if they are same otherwise 0
 */
int compare(char *haystack, char *needle)
{
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
			return (0);
		haystack++;
		needle++;
	}
	return (1);
}
/**
 * _strstr - Locates substring
 * @haystack: String to be searched
 * @needle: Substring to be located
 * Return: Pointer to start of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
		return (haystack);
	while (*haystack++)
		if ((*haystack == *needle) && compare(haystack, needle))
			return (haystack);
	return (NULL);
}
