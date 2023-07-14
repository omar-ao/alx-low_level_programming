#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 'e')
		{
			if (i != 'q')
				putchar(i);
		}
		i++;
	}
	putchar(10); /* print newline */

	return (0);
}
