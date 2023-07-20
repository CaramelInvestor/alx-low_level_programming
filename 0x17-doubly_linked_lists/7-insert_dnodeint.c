#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a new
 * node at a given position.
 * @h: double pointer to the head node
 * @idx: index of the list
 * @n: value of the list
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newnode, *current;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;

	if (*h == NULL && idx > 0)
	{
		free(newnode);
		return (NULL); /* free newnode and return NULL if idx is greater than 0 */
	}
	if (newnode == NULL)
	{
		/* insert at the beginng of the list */
		newnode->prev = NULL;
		newnode->next = *h;
		if (*h == NULL)
		{
			(*h)->prev = newnode;
		}
		*h = newnode;
	}
	else
	{
		/* Transverse the list to find the position to insert the new node */
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
	if (current == NULL)
	{
		/* index is out of range*/
		free(newnode);
		return (NULL);
	}
	/* insert the newnode */
	newnode->next = current->next;
	newnode->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = newnode;
	}
	current->next = newnode;
	}
	return (newnode);
}
