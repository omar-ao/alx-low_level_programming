#include "lists.h"

/**
 * sum_listint - Computes the sum of all data(n) of listint_t linked list
 * @head: Head node of the list
 * Return: Sum or 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
