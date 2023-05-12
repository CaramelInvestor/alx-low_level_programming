#include "main.h"

/**
 *_print_rev_recursion - function that prints a string in reverse
 *@s: the pointer variable to be reversed
 *Return: return void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
