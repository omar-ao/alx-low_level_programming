#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (i == j)
				continue;
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if ((i + j) != (98 + 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10); /* print a new line */
	return (0);
}
