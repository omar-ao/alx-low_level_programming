#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 *
 * @h: Pointer to the list head
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *) h;
	size_t n = 0;

	while (current != NULL)
	{
		n++;
		current = current->next;
	}
	return (n);
}
