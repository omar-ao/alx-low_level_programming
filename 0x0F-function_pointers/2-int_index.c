#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: Array of elements
 * @size: Size of the array
 * @cmp: A pointer to a function that compares ints
 * Return: Index of the element if found otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index = -1;

	if (size <= 0)
		return (-1);

	if (cmp && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				index = i;
				break;
			}
		}
	}
	return (index);
}

