#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long long first, second, next;
	first = 1, second = 2;

	printf("%llu, %llu, ", first, second);
	for (i = 3; i < 98; i++)
	{
		next = first + second;
		printf("%llu", next);
		if (i < 98)
			printf(", ");
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
