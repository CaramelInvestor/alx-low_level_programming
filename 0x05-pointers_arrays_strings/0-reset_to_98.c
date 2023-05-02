#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *@n: an int as parameter and updates the value it points to to 98.
 * Return: Always 0.
 */
void reset_to_98(int *n);
{
	int n;
	int *p;

	n = 402;
	p = &n;
	printf("n=%d\n", n);
	*p = 98;
	printf("n=%d\n", n);
	return (0);
}
