#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of a signle
 * digit numbers separated by , and followed by a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44); /* print comma */
			putchar(32); /* print space */
		}
	}
	putchar(10); /* print new line */
	return (0);
}
