#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a listint_t linked list.
 * @head: List head
 * @index: Index of the node
 * Return: Node if it exists otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
