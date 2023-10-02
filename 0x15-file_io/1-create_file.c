#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: The name of the file to be created
 * @text_content: Null terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, flags, perms, len;

	flags = O_CREAT | O_WRONLY | O_TRUNC;
	perms = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, flags, perms);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		if (write(fd, text_content, len) == -1)
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
