#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data(n) of a dlistint_t
 * linked list
 *
 * @head: Pointer
 * Return: If list is empty 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
