#include "main.h"

/**
 * binary_to_uint - Converts a binary to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: The converted number or 0 if b is NULL or ther is character
 * other than 0 and 1 in the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, bi, len, p = 0;

	if (b == NULL)
		return (0);
	len = _strlen((char *) b);
	for (i = len - 1; i >= 0; i--)
	{
		bi = b[i] - '0';
		if (!(bi == 0 || bi == 1))
			return (0);
		num += bi * _pow(2, p);
		p++;
	}
	return (num);
}
/**
 * _pow - Computes power of number
 * @n: Base number
 * @p: Power
 * Return: 1 if power is zero otherwise power
 */
int _pow(int n, int p)
{
	int r = 1, i;

	if (p == 0)
		return (r);
	for (i = 0; i < p; i++)
		r *= n;
	return (r);
}
/**
 * _strlen - Finds length of string
 * @s: string
 * Return: Length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s++))
		len++;
	return (len);
}
