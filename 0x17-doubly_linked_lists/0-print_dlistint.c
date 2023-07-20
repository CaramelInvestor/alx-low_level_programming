#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @*h: the head node of dlistint_t list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	/* 1-2-3-4 */
	/* h=1, h=h.next to get to the next one */
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return count;
}
