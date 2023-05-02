#include "main.h"
#include <stdio.h>

void reset_to_98(int *n);
{
	int *n;

	*n = &n;
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	_putchar(n);
	_putchar('\n');
	reset_to_98(&n);
	_putchar(&n);
	_putchar('\n');
	return (0);
}
