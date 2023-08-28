#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: First node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
