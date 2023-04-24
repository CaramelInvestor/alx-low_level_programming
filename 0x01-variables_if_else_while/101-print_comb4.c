#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Serves as the entry point to the program
 *
 * Return: Return zero if no error is encountered,
 * else return a non zero number
 */

int main(void)
{
	int n;
	int m;
	int o;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (o = 50; o < 58; o++)
			{
				if (o > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(o);
					if (n != 55 || m != 5)
						{
							putchar(',');
							putchar(' ');
						}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
