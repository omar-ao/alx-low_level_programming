#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument values
 * Return: 1 if argument value contains not a number other 0
 */
int main(int argc, char **argv)
{
	int num, sum, i, j, len;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
		for (j = 0, len = strlen(argv[i]); j < len; j++)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
