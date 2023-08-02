#include "main.h"

/**
 * find_sqrt - Computes the square root of number using binary search
 * @low: lowest number
 * @high: highest number of the range
 * @n: The number to be computed
 * Return: Square root
 */
int find_sqrt(int low, int high, int n)
{
	int m;

	if (low <= high)
	{
		m = (low + high) / 2;
		if ((m * m) <= n && (m + 1) * (m + 1) > n)
			return (m);
		else if ((m * m) < n)
			return (find_sqrt(m + 1, high, n));
		else
			return (find_sqrt(low, m - 1, n));
	}
	return (low);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to be computed
 * Return: Natural square root.
 */
int _sqrt_recursion(int n)
{
	int r = find_sqrt(0, n, n);

	if ((r * r) != n)
		return (-1);
	return (r);
}
