#include "lists.h"

/**
 * print_listint - Prints all the elements of a list_t list.
 * @h: List head
 * Return: Number of elements
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
