#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: First node of the list
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
