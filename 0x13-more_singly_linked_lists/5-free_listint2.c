#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * Description: Sets the head to NULL
 * @head: First node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
