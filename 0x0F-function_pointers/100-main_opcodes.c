#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	unsigned char *f = (unsigned char *) main;
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
		printf("%02x ", *(f + i));
	printf("\n");
	return (0);
}
