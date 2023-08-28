#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list.
 * @head: First node of the list
 * @n: Data of the list
 * Return: List if success or NULL if memory allocation fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node;

	return (*head);
}
