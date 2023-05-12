#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_puts_recursion - the main function that prints a string
 *@s: the character pointer
 *Return: a string followed by a string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
