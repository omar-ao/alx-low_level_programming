#include "main.h"

/**
 * strtow - Splits strings into words
 * @str: String to split.
 * Return: Array of pointers containing the words
 */
char **strtow(char *str)
{
	int i, j, k, len, nw, start;
	char **words;

	if (str == NULL || *str == '\0' || (*str == ' ' && strlen(str) == 2))
		return (NULL);
	nw = get_number_of_words(str);
	words = malloc(sizeof(char *) * (nw + 1));
	for (i = 0, j = 0; i < nw; i++)
	{
		while (str[j] == ' ')
			j++;
		start = j;
		while (str[j] && (str[j] != ' '))
			j++;
		len = j - start;
		words[i] = malloc(len + 1);
		if (words[i] == NULL)
			return (free_words(words, len));
		for (k = 0; k < len; k++)
			words[i][k] = str[start + k];
		words[i][k] = '\0';
	}
	words[nw] = NULL;
	return (words);
}
/**
 * get_number_of_words - Gets the number of words in string
 * @s: String containing words
 * Return: Number of words
 */
int get_number_of_words(char *s)
{
	int i, nw;

	for (i = 0; s[i]; i++)
		if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
			nw++;
	return (nw);
}
/**
 * free_words - Frees memory allocated for words
 * @words: Array of pointers containing words
 * @len: Length of each word
 * Return: NULL;
 */
char **free_words(char **words, int len)
{
	int i;

	for (i = 0; i < len; i++)
		free(words[i]);
	free(words);
	return (NULL);
}
