#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of arguments
 * Return: 0 if n is 0 otherwise sum off all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list va;

	if (!n)
	{
		va_end(va);
		return (0);
	}

	va_start(va, n);
	for (i = 0; i < (int) n; i++)
		sum += va_arg(va, int);
	va_end(va);
	return (sum);
}
