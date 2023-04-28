#include "main.h"

/**
 *more_numbers - prints 10 times the numbers,
 *from 0 to 14, followed by a new line.
 *Return: 0
 */

void more_numbers(void)
{
	int row, num, t, u;

	for (row = 1; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				t = num / 10;
				u = num % 10;
				{
					_putchar(t);
					_putchar(u);
				}
			}
		}
	}
	_putchar('\n');
}
