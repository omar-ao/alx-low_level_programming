#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output
 * 
 * @filename: Filename
 * @letters: The number of letters it should read and print
 * Return: The actual number of letters it could read and print or 0
 * if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int input_fd;
	ssize_t nread;
	char *buf;

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	input_fd = open(filename, O_RDONLY);
	if (input_fd == -1)
		return (0);

	nread = read(input_fd, buf, letters);
	if (nread == -1)
		return (0);

	if (write(STDOUT_FILENO, buf, nread) != nread)
		return (0);

	if (close(input_fd) == -1)
		return (0);
	free(buf);
	return (nread);
}
