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

	while (next < MAX_TERM)
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
