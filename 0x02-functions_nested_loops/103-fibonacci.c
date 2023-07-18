#include <stdio.h>

#define MAX_TERM 4000000 /* Max fibonacci term */

unsigned long fibonacci(int);
unsigned long sum_even_fibonacci(unsigned long, int, unsigned long);

/**
 * main - Entry point
 * Description: Finds and prints the sum of the even valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long result;

	result = sum_even_fibonacci(MAX_TERM, 1, 0);
	printf("%lu\n", result);
	return (0);
}

/**
 * fibonacci - Find fibonacci of n
 * @n: Integer
 * Return: Fibonacci of n
 */
unsigned long fibonacci(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	return (fibonacci(n - 1) + fibonacci(n - 2));
}

/**
 * sum_even_fibonacci - Find the sum of the fibonacci numbers n
 * @limit: The maximum term of fibonacci
 * @n: index
 * @sum: The sum of fibonaccis
 * Return: Sum
 */
unsigned long sum_even_fibonacci(unsigned long limit, int n, unsigned long sum)
{
	unsigned long current_fibo = fibonacci(n);

	if (current_fibo >= limit)
		return (sum);
	if (current_fibo % 2 == 0)
		sum = sum + current_fibo;
	return (sum_even_fibonacci(limit, n + 1, sum));
}
