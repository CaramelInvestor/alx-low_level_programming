#include "main.h"
#include <stdio.h>

/**
 *rev_string -  a function that reverses a string
 *@s: Character to be reversed
 *Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int c;

	while (s[counter] != '\0')
	counter++;
	for (c = 0; c < counter; c++)
	{
		counter--;
		rev = s[c];
		s[c] = s[counter];
		s[counter] = rev;
	}
}
