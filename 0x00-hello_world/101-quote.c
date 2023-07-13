#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful";
	char name[] = "Dora Korpar";
	char date[] = "2015-10-19";

	fprintf(stderr, "%s\" - %s, %s\n", quote, name, date);
	return (1);
}
