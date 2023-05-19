#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked -  function that allocates memory using malloc
 *@b: integer variable
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
