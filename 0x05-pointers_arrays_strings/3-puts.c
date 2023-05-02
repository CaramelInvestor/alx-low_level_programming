#include "main.h"
#include <stdio.h>

/**
 * _puts- check the code
 * @str: string to print on new line
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
