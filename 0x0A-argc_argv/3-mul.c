#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Pointer to argument values
 * Return: 1 if number of argument passed is not 2 other 0 (Success)
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
