#include <stdio.h>

#define MID 10000000000

/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long first = 0, second = 1, next;
	unsigned long first_half0, first_half1;
	unsigned long second_half0, second_half1;
	int i;

	for (i = 0; i < 92; i++)
	{
		next = first + second;
		first = second;
		second = next;
		printf("%lu, ", next);
	}

	first_half0 = first / MID;
	first_half1 = first % MID;
	second_half0 = second / MID;
	second_half1 = second / MID;

	for (i = 93 ; i <= 98; i++)
	{
		first = first_half0 + first_half1;
		second = second_half0 + second_half1;

		if (first_half0 + first_half1 > 9999999999)
		{
			first += 1;
			second %= MID;
		}
		printf("%lu%lu", first, second);
		if (i != 98)
			printf(", ");
		first_half0 = second_half0;
		first_half1 = second_half1;
		second_half0 = first;
		second_half1 = second;
	}
	printf("\n");
	return (0);
}
