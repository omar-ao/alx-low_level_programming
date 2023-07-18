#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural from n to 98 followed by a new line.
 * @n: An integer
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			--n;
		else
			++n;
	}
	if (n == 98)
		printf("%d\n", n);
}
