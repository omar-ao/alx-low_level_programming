#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 *
 * @list: list
 * @size: size
 * @value: value
 *
 * Return: a pointer to the first node where value is located
 * otherwise -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	if (!list || !(*list))
		return (-1);
}
