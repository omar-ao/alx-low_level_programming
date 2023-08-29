#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Head node of the list
 * @idx: is the index of list where the new node should be added
 * @n: is the data the new should contain
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	unsigned int i;

	if (idx == 0)
		add_nodeint(head, n);
	else
	{
		current = *head;
		for (i = 0; i < idx - 1; i++, current = current->next)
			if (current == NULL)
				return (NULL);
		if (current == NULL)
			return (NULL);
		add_nodeint(&(current->next), n);
	}
	return (*head);
}
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
