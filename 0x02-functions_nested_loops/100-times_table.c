#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_times_table - Prints times table
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n == 0)
	{
		printf("0\n");
	}
	else if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				if (j == n)
				{
					printf("%3d", r);
				}
				else if (j == 0)
				{
					printf("%d, ", r);
				}
				else
				{
					printf("%3d, ", r);
				}
			}
			printf("\n");
		}
	}
	else
		return;

}
