#include <stdio.h>
#include <math.h>

#define NUM 612852475143

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long i, largest;

	for (i = 1; i < sqrt(NUM); i++)
		if (NUM % i == 0)
			largest = i;

	printf("%lu\n", largest);
	return (0);
}
