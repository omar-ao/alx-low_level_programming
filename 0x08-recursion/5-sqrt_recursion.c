#include "main.h"

/**
 * find_sqrt - Computes the square root of number using binary search
 * @low: lowest number
 * @high: highest number of the range
 * @n: The number to be computed
 * Return: Square root
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
