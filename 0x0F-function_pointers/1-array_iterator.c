#include "function_pointer.h"

/**
 * array_iterator - A function that executes a function given a parameter
 * on each element of an array
 * @array: Array
 * @size: Size of array
 * @action: Pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action)
		for (i = 0; i < (int) size; i++)
			action(array[i]);
}