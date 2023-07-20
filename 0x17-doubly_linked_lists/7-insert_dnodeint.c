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
	dlistint_t *newnode;

	if ((*h)->next == NULL)
		return (add_dnodeint_end(h, n));
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		(*h) = (*h)->next;
		if ((*h) == NULL)
			return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	newnode->prev = (*h);
	newnode->next = (*h)->next;
	(*h)->next->prev = newnode;
	(*h)->next = newnode;
	return (newnode);
}
