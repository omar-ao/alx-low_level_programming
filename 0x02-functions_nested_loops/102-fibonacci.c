#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the first 50 Fibonacci numbers,starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long first, second, next;

	first = 1, second = 2;
	printf("%lu, %lu, ", first, second);
	for (i = 3; i <= 50; i++)
	{
		next = first + second;
		printf("%lu", next);
		if (i < 50)
			printf(", ");
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
