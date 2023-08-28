#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list.
 * @head: First node of the list
 * @n: Data of the list
 * Return: List if success or NULL if memory allocation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
