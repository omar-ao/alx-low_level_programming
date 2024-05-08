#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of intergers
 * using the Exponential search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size:  The number of elements in arrray
 * @value: The value to search for
 *
 * Return: First index where value is located otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, m, low, high;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);
	i = 1;

	while (i < size && (array[i] <= value))
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	/* Perform binary search */
	low = i / 2;
	high = (i < (size - 1)) ? i : (size - 1);

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	while (low <= high)
	{
		printf("Searching in array: ");
		print_sub_array(array, low, high);

		m = (low + high) / 2;
		if (array[m] < value)
			low = m + 1;
		else if (array[m] > value)
			high = m - 1;
		else
			return ((int)m);
	}
	return (-1);
}

/**
 * print_sub_array - Prints array
 *
 * @array: Array
 * @L:     First element,
 * @R:     Last element
 */
void print_sub_array(int *array, int L, int R)
{
	int i;

	for (i = L; i < R; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[R]);
}
