#include <stdio.h>

#define NUM 612852475143

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long i, largest;

	for (i = NUM; i > 1; i -= 2)
		if (NUM % i == 0)
		{
			largest = i;
			break;
		}
	printf("%lu\n", largest);
	return (0);
}
