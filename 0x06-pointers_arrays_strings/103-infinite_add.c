#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: pointer to string of numbers
 * @n2: pointer to second string of numbers
 * @r: pointer to the sum of @n1 and @n2
 * @size_r: size of the string @r
 * Return: @r
 */
 char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, sum, len, carry = 0;

	len = strlen(n1);
	for (i = 0; i < len; i++)
	{
		sum = (n1[len - i - 1] - '0') + (n2[len - i - 1] - '0') + carry;
		carry = (sum > 9) ? 1 : 0;
		r[size_r -i - 1] = ((sum % 10) + '0');
	}
	r[0] = '1';
	return (r);
}
