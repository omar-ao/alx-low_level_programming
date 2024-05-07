#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of intergers
 * using the interpolation search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size:  Size of the array
 * @value: Value to be searched for
 * Return: Index where value is located otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	pos = 0;

	while (pos < size)
	{
		pos = low + (((double)(high - low) / (array[high] -
					array[low])) * (value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos,
					array[pos]);
		else
			printf("Value checked array[%ld] is out of range\n",
					pos);
		if (array[pos] > value)
			high = pos;
		else if (array[pos] < value)
			low = pos;
		else
			return (pos);
	}
	return (-1);
}
