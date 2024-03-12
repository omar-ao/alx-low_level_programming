#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: Index where value is located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int L, m, R;

	if (array == NULL)
		return (-1);
	L = 0;
	R = (int) size - 1;

	while (L <= R)
	{
		print_array(array, L, R);
		m = (L + R) / 2;
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
 * print_array - Prints elements of array
 *
 * @array: array
 * @L: left
 * @R: right
 */
void print_array(int *array, int L, int R)
{
	int i = L;

	printf("Searching in array: ");
	while (i <= R)
	{
		printf("%d", array[i]);
		if (i != R)
			printf(", ");
		i++;
	}
	printf("\n");
}
