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
	unsigned long half0, half1, second_half0, second_half1;
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
	second_half1 = second % MID;

	for (i = 93 ; i <= 98; i++)
	{
		half0 = first_half0 + second_half0;
		half1 = first_half1 + second_half1;

		if (half1 > 9999999999)
		{
			half0 += 1;
			half1 %= MID;
		}
		printf("%lu%lu", half0, half1);
		if (i != 98)
			printf(", ");
		first_half0 = second_half0;
		first_half1 = second_half1;
		second_half0 = half0;
		second_half1 = half1;
	}
	printf("\n");
	return (0);
}
