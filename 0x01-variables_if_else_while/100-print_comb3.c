#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations
 * of two digits separated by comma and followed by new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = i; j <= 57; j++)
		{
			if (j == 48)
				continue;

			putchar(i);
			putchar(j);

			if ((i + j) != (56 + 57))
			{
				putchar(44); /* print a comma */
				putchar(32); /* print a space */
			}
		}
	}
	putchar(10); /* print a new line */
	return (0);
}
