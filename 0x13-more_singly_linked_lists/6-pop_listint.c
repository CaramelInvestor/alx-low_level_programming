#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: linked list that is a pointer to a pointer
 * of type linstint_t
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
	{
		return (0);
	}
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
