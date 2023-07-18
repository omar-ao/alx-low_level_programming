#include <stdio.h>

#define MAX_TERM 4000000 /* Max fibonacci term */

/**
 * main - Entry point
 * Description: Finds and prints the sum of the even valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long first, second, next, sum;

	first = 1, second = 2;

	sum = 2;

	for ( ;next < MAX_TERM; )
	{
		next = first + second;
		if (next % 2 == 0)
			sum = sum + next;
		first = second;
		second = next;
	}

	printf("%lu\n", sum);
	return (0);
}
unsigned long fibonacci(unsigned long);

unsigned long sum_even_fibonacci(int limit, int n, unsigned long sum)
{
	unsigned long first, second, next, sum;

	first = 1, second = 2;
	sum = second;
	next = first + second;
}
