#include "lists.h"
/**
 * dlistint_len - a function that returns the number of
 * elements in a linked dlistint_t list.
 *@h: pointer to the head node of the list
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
