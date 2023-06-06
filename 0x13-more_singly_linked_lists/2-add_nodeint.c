#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t list.
 * @head: linked list that is a pointer to a pointer of type listint_t
 * @n: data to insert in new node
 * Return: new node at the beginning of a list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
