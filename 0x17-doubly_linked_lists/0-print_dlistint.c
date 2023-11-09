#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint list
 *
 * @h: Pointer to the list head
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *) h;
	size_t n = 0;

	while (current != NULL)
	{
		n++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (n);
}
