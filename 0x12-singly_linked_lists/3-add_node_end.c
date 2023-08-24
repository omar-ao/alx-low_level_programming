#include "lists.h"

/**
 * add_node_end - Adds node at the end of a list_t list.
 * @head: First node of the list
 * @str: String
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *current = *head;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;

	if (current == NULL)
		*head = n;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = n;
	}
	return (*head);
}
