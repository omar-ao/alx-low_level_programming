#include "main.h"

/**
 * find_sqrt - Computes the square root of number
 * @n: The number to be computed
 * @s: square root/ base
 * Return: -1 if not perfect square other square root
 */
int find_sqrt(int n, int s)
{
	if ((s * s) == n)
		return (s);
	if (s * s > n)
		return (-1);
	return (find_sqrt(n, ++s));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to be computed
 * Return: Natural square root.
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}
