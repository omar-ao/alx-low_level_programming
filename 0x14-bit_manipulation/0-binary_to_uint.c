#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: Pointer to characters of binary
 * Return: The converted number, or 0 if
 * there is one or more characters in the string b that is not 0 or 1
 * b is null
 */
unsigned int binary_to_uint(const char *b)
{
	int i, p, len;
	unsigned int num = 0;

	if (!is_valid(b))
		return (0);
	len = _strlen(b);
	p = len - 1;
	for (i = 0; i < len; i++, p--)
	{
		if (b[i] == '1')
		{
			num += _pow(2, p);
		}
	}
	return (num);
}

/**
 * is_valid - Checks if b is or there is any other char in b other than
 * 0 or 1
 * @b: Pointer to string
 * Return: 1 if valid or 0
 */
int is_valid(const char *b)
{
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (!(b[i] == '0' || b[i] == '1'))
		{
			return (0);
		}
		i++;
	}

	return (1);
}
/**
 * _strlen - Gets the length of string
 *
 * @s: Pointer to string
 * Return: Length of the string
 */
int _strlen(const char *s)
{
	int len = 0, i = 0;

	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * _pow - Computes the power of a number
 *
 * @n: Base number
 * @p: Power
 * Return: Power of the number
 */
unsigned int _pow(int n, int p)
{
	unsigned int power = 1;

	if (p == 0)
		return (1);
	while (p--)
		power *= n;
	return (power);
}
