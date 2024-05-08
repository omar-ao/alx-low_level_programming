#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the jump search algorithm
 *
 * @array: Pointer to the array of elements
 * @size:  Size of the array
 * @value: Value to be searched
 * Return: Index of the value if found otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, block = sqrt(size);

	start = 0;
	end = block;

	if (array == NULL)
		return (-1);
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	if (array[start] == value)
		return (start);

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += block;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	while (start <= end)
	{
		printf("Value checked array[%ld] = [%d]\n", start,
				array[start]);
		if (array[start] == value)
			return (start);
		start++;

		if (end >= size)
			break;
	}
	return (-1);
}
