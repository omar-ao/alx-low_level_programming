#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the sum of all multiples of 3 and 5 bellow 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum;

	for (i = 0, sum = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%d\n", sum);
	return (0);
}
