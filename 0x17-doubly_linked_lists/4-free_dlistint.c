#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 *
 * @head: Pointer list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		current = current->next;
		free(head);
		head = current;
	}
}
