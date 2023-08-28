#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Head node of the list
 * Return: Element of the head node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node = *head;

	if (node == NULL)
		return (0);
	n = node->n;
	node = node->next;
	free(*head);
	*head = node;

	return (n);
}
