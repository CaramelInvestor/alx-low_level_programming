#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 *@min: minimum range of value
 *@max: maximum range of value
 *Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
