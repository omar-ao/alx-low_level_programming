#include "main.h"

/**
 * _pow_recursion - Computes x to power of y
 * @x: base
 * @y: power
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return ((y == 1) ? (x) : (x * _pow_recursion(x, --y)));
}
