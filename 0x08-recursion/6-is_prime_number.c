#include "main.h"

/**
 * is_prime_number - Check if number is prime
 * @n: number to be checked
 * Return: 1 for prime number 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number(++i));
}
