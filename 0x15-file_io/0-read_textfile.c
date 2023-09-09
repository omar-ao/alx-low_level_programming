#include "main.h"

/**
 * read_textfile - Reads a text file and printf it to the POSIX
 * standard output
 * @filename: Filename
 * @letters: The number of letters it should read and print
 * Return: The number of letters it could read or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t br, bw;
	char *buffer;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	br = read(fd, buffer, letters);
	if (br == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	bw = write(STDOUT_FILENO, buffer, br);
	if (bw == -1 || (br != bw))
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (br);
}
