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

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			{
				if (n != 56 || m != 57)
			
				{
				
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
        return (0);
}
