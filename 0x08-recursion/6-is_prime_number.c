#include "main.h"

/**
 * _is_prime - Checks recursively if a number is prime
 * @n: number to be checked
 * @i: base
 * Return: 1 if number is prime 0 otherwise
 */
int _is_prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime(n, ++i));
}

/**
 * is_prime_number - Check if number is prime
 * @n: number to be checked
 * Return: 1 for prime number 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_is_prime(n, 2));
}
