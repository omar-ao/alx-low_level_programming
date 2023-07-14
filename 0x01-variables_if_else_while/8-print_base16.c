#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j = 0;

	for (i = 48; i <= 63; i++)
	{
		if (i > 57)
		{
			if (j == 0)
				j = 97;
			putchar(j);
			j++;
		}
		else
			putchar(i);
	}
	putchar(10); /* print new line */
	return (0);
}
