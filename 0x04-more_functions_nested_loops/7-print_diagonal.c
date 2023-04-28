#include "main.h"

/**
 *print_diagonal - serves as main function
 *@n: no of times the character\ should be printed
 *Return - If n is 0 or less
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int o, p;

		for (o = 0; o < n; o++)
		{
			for (p = 0; p < n; p++)
			{
				if (o == p)
				_putchar('\\');
				else if (p < o)
				_putchar(' ');
			}
				_putchar('\n');
		}
	}
}
