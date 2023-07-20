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

	for (i = (int) sqrt(NUM); i > 2; i++)
		if (NUM % i == 0)
		{
			largest = i;
			break;
		}

	printf("%lu\n", largest);
	return (0);
}
