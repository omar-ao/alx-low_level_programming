#include "main.h"

/**
 * _strlen - Returns the lenght of string
 * @s: string
 * Return: Length
 */
ssize_t _strlen(char *s)
{
	ssize_t letters = 0;

	while (*(s++))
		letters++;
	return (letters);
}
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Filename
 * @text_content: Text content
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t letters, bw;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		letters = _strlen(text_content);
		bw = write(fd, text_content, letters);
		if (bw == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
