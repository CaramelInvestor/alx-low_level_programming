#include "lists.h"
/**
 * get_dnodeint_at_index -  function that returns the nth node of a dlistint_t linked list.
 * @head: pointer to the first node
 * @index: index to be passed
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	if (!(head) || !(index >= i))
		return (NULL);
	if (i == index)
		return (curr);

	while (curr)
	{
		curr = curr->next;
		i++;
		if (i == index)
			break;
	}
	return (curr);
}
