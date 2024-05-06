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
	int start, end, block = sqrt(size);

	start = 0;
	end = block;

	if (array == NULL)
		return (-1);

	while (start < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (value < array[block])
		{
			printf("Value found between indexes [%d] and [%d]\n", start, end);
			return linear_s(array, start, end, value);
		}
		else if (value > array[end])
		{
			start = end;
			end = end + block;
		}
		else
		{
			printf("Value found between indexes [%d] and [%d]\n", start, end);
			return (end);
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	return (-1);
}

/**
 * linear_search - Searches for a value in an array of integers using
 * the Linear search algorithm
 *
 * @array: Pointer to array of elements
 * @L:     Start
 * @R:     End
 * @value: Value to be searched
 *
 * Return: Index of the element otherwise
 */
int linear_s(int *array, int L, int R, int value)
{
	int i;

        for (i = L; i <= R; i++)
        {
                printf("Value checked array[%d] = [%d]\n", i, array[i]);
                if (array[i] == value)
                        break;
        }
	return (array[i]);
}
