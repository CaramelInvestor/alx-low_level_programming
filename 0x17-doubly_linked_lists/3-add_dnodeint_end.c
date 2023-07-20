#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at the
 * end of a dlistint_t list.
 * @head: double pointer to the head node
 * @n: value of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL, *temp, *current;

	current = *head;
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (current == NULL)
	{
		*head = newnode;
		return (*head);
	}

	while (current != NULL)
	{
		temp = current;
		current = current->next;
	}
	temp->next = newnode;
	newnode->prev = temp;
	return (newnode);
}
