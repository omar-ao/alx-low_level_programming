#include "main.h"

/**
 * _abs - Computes the absolute of an integer.
 * @n: an integer value.
 * Return: Postive integer.
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
