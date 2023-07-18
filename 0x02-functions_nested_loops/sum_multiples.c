#include <stdio.h>
#include "main.h"

/**
 * sum_multiples - Prints the sum of all multiples of 3 and 5 bellow 1024
 */
void sum_multiples(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%d\n", sum);
}
