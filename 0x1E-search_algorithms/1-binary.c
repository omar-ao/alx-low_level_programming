#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the binary search
 *
 * @array: Pointer to array of elements
 * @size:  Size of the array
 * @value: Value to be searched
 * Return: Index of value otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0, R = (int) size - 1, m;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		print_sub_array(array, L, R);
		m = ((L + R) / 2);
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
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
