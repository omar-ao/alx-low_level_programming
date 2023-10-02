#include "main.h"

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument value
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);

	return (0);
}

/**
 * cp - Copies the content of a file to another file
 *
 * @file_from: File to copy content from
 * @file_to: File to write content to
 */
void cp(char *file_from, char *file_to)
{
	int fd_from, fd_to, flags, perms;
	ssize_t nread;
	int bufsiz = 1024;
	char *buf, *read_err, *write_err;

	read_err = "Error: Can't read from file";
	write_err = "Error: Can't write to file";

	flags = O_WRONLY | O_CREAT | O_TRUNC;
	perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	buf = malloc(bufsiz);
	if (buf == NULL)
		return;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_err(read_err, file_from, 98);

	fd_to = open(file_to, flags, perms);
	if (fd_to == -1)
		print_err(write_err, file_to, 99);

	while ((nread = read(fd_from, buf, bufsiz)) > 0)
		if (write(fd_to, buf, nread) != nread)
			print_err(write_err, file_to, 99);
	if (nread == -1)
		print_err(read_err, file_from, 98);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	free(buf);
}

/**
 * print_err - Prints error message
 *
 * @err_msg: Error message
 * @file: File
 * @err_no: Error status
 */
void print_err(char *err_msg, char *file, int err_no)
{
	dprintf(STDERR_FILENO, "%s %s\n", err_msg, file);
	exit(err_no);
}
