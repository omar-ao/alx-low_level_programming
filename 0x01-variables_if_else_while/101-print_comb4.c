#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations
 * of three digits 1, 0 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if ((i + j + k) != (55 + 56 + 57))
				{
					putchar(44); /* Print a comma */
					putchar(32); /* print a space */
				}
			}
		}
	}
	putchar(10); /* Print a new line */
	return (0);
}
