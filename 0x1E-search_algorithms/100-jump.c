#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * the jump search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @value: The value to be searched in the array
 *
 * Return: Index where value is located otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int a, b, n;

	a = 0;
	n = (int) size;
	b = sqrt(n);

	while (array[min(b, n) -1] < value)
	{
		a = b;
		b = b + sqrt(n);
		if (a >= n)
			return (-1);
	}

	while (array[a] < value)	
	{
		if (a == min(b, n))
			return (-1);
		a++;
	}
	
	if (array[a] == value)
		return (a);

	return (-1);
}

/**
 * min - Find min of two numbers
 *
 * @a: a
 * @b: b
 *
 * return: Min
 */
int min(int a, int b)
{
	return ((a < b) ? a : b);
}
