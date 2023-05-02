#include "main.h"
#include <stdio.h>

/**
 *print_rev - a function that prints a string,
 *in reverse, followed by a new line.
 *@s: srting declared
 *Return: Nothing
 */
void print_rev(char *s)
{
	int longi = 0;
	int r;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (r = longi; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
