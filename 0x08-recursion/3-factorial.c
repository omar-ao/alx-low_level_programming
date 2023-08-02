#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Given number
 * Return: -1 if n is lower than 0 and 1 if n is 0 otherwise factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return ((n == 0) ? (1) : (n * factorial(n - 1)));
}
