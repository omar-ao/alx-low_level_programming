#include <stdio.h>

#define MAX_TERM 4000000 /* Max fibonacci term */

unsigned long sum_even_fibonacci(unsigned long);

/**
 * main - Entry point
 * Description: Finds and prints the sum of the even valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long result;

	result = sum_even_fibonacci(MAX_TERM);
	printf("%lu\n", result);
	return (0);
}

/**
 * sum_even_fibonacci - Find the sum of the fibonacci numbers n
 * @limit: The maximum term of fibonacci
 * @n: index
 * @sum: The sum of fibonaccis
 * Return: Sum
 */
unsigned long sum_even_fibonacci(unsigned long limit)
{
	unsigned long first, second, next, sum;

	first = 1, second = 2;
	sum = 2;

	next = 0;
	
	while (next <= limit)
	{
		next = first + second;
		if (next % 2 == 0)
			sum = sum + next;
		first = second;
		second = next;
	}
	return (sum);
}
