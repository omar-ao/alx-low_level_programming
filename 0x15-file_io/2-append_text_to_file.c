#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Filename
 * @text_content: Null terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, flags, len;

	if (filename == NULL)
		return (-1);

	flags = O_WRONLY | O_APPEND;

	fd = open(filename, flags);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content) + 1;
		if (write(fd, text_content, len) == -1)
			return (-1);
		if (write(fd, "\n", 1) == -1)
			return (-1);
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
/**
 * _strlen - Gets the length of string
 *
 * @s: String
 * Return: Length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s++))
		len++;
	return (len);
}
