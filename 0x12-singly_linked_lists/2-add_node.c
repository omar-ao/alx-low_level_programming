#include "lists.h"

/**
 * add_node - Adds node at the beginning of a list_t list.
 * @head: First node of the list
 * @str: String
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = strlen(str);
	n->next = *head;
	*head = n;
	return (*head);
}
