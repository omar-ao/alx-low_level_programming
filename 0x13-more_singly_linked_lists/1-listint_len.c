#include "lists.h"

/**
 * listint_len - Find the number of elements of linked listint_t list.
 * @h: List head
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
