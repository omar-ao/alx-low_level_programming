#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Pointer to argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	(void)argc;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
