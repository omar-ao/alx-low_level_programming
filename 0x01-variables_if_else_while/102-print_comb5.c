#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of
 * two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, m;

	for (i = 48; i <= 57; i++)
	{
		for (j = i; j < 57; j++)
		{
			for (k = j; k <= 57; k++)
			{
				for (m = k + 1; m <= 57; m++)
				{
					putchar(i);
					putchar(j);
					putchar(32); /* Print a space */
					putchar(k);
					putchar(m);

					if ((i + j + k + m) != (57 + 56 + 57 + 57))
					{
						putchar(44); /* Print a comma */
						putchar(32); /* Print a space */
					}
				}
			}
		}
	}
	putchar(10); /* Print a new line */
	return (0);
}
