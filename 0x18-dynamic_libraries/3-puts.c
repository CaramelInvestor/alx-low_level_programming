#include "main.h"
#include <stdio.h>

/**
 * _puts- check the code
 * @str: string to print on new line
 * Return: Always 0.
 */
void _puts(char *str)

/*{*/
/*	while (*str != '\0')*/
/*	{*/
/*		_putchar(*str++);*/
/*	}*/
/*		_putchar('\n');*/
/*}*/

{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}

/*	int i;*/

/*	for (i = 0; str[i] != '\0'; i++)*/
/*	{*/
/*		_putchar(str[i])*/
/*	}*/
/*		_putchar('\n')*/
/*}*/
