#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument values
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*cal)(int, int);
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = argv[2][0];
	if (!(op == '+' || op == '-' || op == '*' || op == '/' || op == '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	cal = get_op_func(argv[2]);
	result = cal(num1, num2);
	printf("%d\n", result);
	return (0);
}
