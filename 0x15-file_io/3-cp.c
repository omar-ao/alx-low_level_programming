#include "main.h"

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument values
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	char *file_from, *file_to;
	int rv;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = av[1];
	file_to = av[2];

	rv = cp(file_from, file_to);
	return (rv);
}

/**
 * cp - Copies the content of a file to another file
 * @file_from: The file to copy from
 * @file_to: The file to copy to
 * Return: 0 on success or 98 to 100 on error
 */
int cp(char *file_from, char *file_to)
{
	int ffd, ftd, ffc, ftc;
	ssize_t br;
	char buffer[1024];

	ffd = open(file_from, O_RDONLY);
	if (ffd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}

	ftd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ftd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		ffc = close(ffd);
		if (ffc == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffd);
			return (100);
		}
		return (99);
	}

	while ((br = (read(ffd, buffer, 1024))) > 0)
		write(ftd, buffer, br);

	ffc = close(ffd);
	ftc = close(ftd);
	if (ffc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffc);
		return (100);
	}
	if (ftc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ftc);
		return (100);
	}
	return (0);
}
