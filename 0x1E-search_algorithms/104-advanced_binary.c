#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of intergers
 * using binary search. If the value appears more than once in the array the
 * method returns the left most element.
 *
 * @array: is a pointer to the first element of the array to seach in
 * @size:  is the number of elements in array
 * @value: is the value to seach for
 *
 * Return: index where value is located otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	if (!array)
		return (-1);

	index = binary_search_leftmost(array, 0, size - 1, value);
	if (array[index] == value)
		return (index);
	return (-1);
}

/**
 * binary_search_leftmost - Recursive binary search
 *
 * @array: array
 * @low:   low
 * @high:  high
 * @value: value
 *
 * Return: index where value is located or -1
 */
int binary_search_leftmost(int *array, size_t low, size_t high, int value)
{
	int m;

	if (low < high)
	{
		printf("Searching in array: ");
		print_sub_array(array, low, high);
		m = (low + high) / 2;
		if (array[m] < value)
		{
			return (binary_search_leftmost(array, (m + 1),
					high, value));
		}
		else
		{
			return (binary_search_leftmost(array, low, m, value));
		}
	}
	return (low);
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
		printf("%d, ", array[i]);
	printf("%d\n", array[R]);
}
