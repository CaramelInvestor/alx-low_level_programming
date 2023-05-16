#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 *@size: size of the array
 *@c: array of character
 *Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
