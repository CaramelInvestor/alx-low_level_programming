#include "lists.h"
/**
 * *add_dnodeint - function that adds a new node at the beginning of a dlistint_t list.
 * **head: double pointer to the head node
 * n: value in the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint *new;

	if(!head)
		return(NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return(NULL);
	}

	new-> n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	new->next = *head;
	new->prev = NULL;
	*head->prev = new;
	*head = new;
	return head;
}
