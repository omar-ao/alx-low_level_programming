#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 *
 * @head: Pointer
 * @index: The index of the node, starting from 0
 * Return: If the node does not exit NULL else node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	int n = 0;

	while (current != NULL)
	{
		if (n == (int) index)
		{
			return (current);
		}
		n++;
		current = current->next;
	}
	return (NULL);
}
