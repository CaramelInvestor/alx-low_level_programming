#include "main.h"
#include <stdio.h>

/**
 *puts2 - a function that prints every other character of a string,
 *starting with the first character, followed by a new line.
 *@str: string declared
 *Return: void
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *x = str;
	int o;

	while (*x != '\0')
	{
		x++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
