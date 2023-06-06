#include "lists.h"
/**
 * sum_listint - function that calculates the sum of all the
 * data (n) of a listint_t linked list.
 * @head: first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
