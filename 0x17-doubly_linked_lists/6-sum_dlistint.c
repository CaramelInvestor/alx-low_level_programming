#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: pointer to the head node
 * Return: the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;
	if (curr == NULL)
		return (0);
	while (curr != NULL)
	{
		sum = sum + curr->n;
		curr = curr->next;
	}
	return (sum);
}
