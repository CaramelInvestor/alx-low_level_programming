#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: linked list pointer to pointer of type listint_t
 * @n: new node to be added at the end of the list
 * Return: the node at the end of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
